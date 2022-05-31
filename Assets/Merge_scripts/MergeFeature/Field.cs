using System;
using System.Collections.Generic;
using System.Linq;
using Events;
using MergeFeature.Events;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace MergeFeature
{
    /// <summary>
    /// Менеджер мержа, хранит все клетки и префабы всех возможных предметов
    /// </summary>
    public class Field : MonoBehaviour
    {
        [SerializeField]
        private Camera _camera;
        
        [SerializeField]
        private List<Cell> _cells = new List<Cell>();
        [SerializeField]
        private List<Item> _itemPrefabs = new List<Item>();
        [SerializeField]
        private List<Item> _startItems = new List<Item>();
        private CompositeDisposable _subscriptions;
        
        private int _maxLevel;

        private void Awake()
        {
            if (!HasEmptyCells()) return;

            _maxLevel = _itemPrefabs.Select(itemPrefab => itemPrefab.Level).Prepend(0).Max();

            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<MergeEvent>(MergeHandler),
                EventStreams.UserInterface.Subscribe<ItemChangingCellEvent>(ItemChangingCellHandler),
                EventStreams.UserInterface.Subscribe<ItemMustBeReturnEvent>(ReturnItemToPositionHandler),
                EventStreams.UserInterface.Subscribe<UserIsDraggingItemEvent>(HighlightPossibleMerge),
                EventStreams.UserInterface.Subscribe<CellHoveredEvent>(CellHoveredHandler),
                EventStreams.UserInterface.Subscribe<BuyItemEvent>(NewItemBuyingHandler),
                EventStreams.UserInterface.Subscribe<StopMergeFXEvent>(StopMergeFXAnimationHandler),
                EventStreams.UserInterface.Subscribe<RefreshButtonClickedEvent>(RefreshButtonClickedHandler),
                EventStreams.UserInterface.Subscribe<PurchasePriceChanged>(UpdateInventoryCost),
                EventStreams.UserInterface.Subscribe<PlayButtonPressedEvent>(PlayButtonPressedEventHandler),
                EventStreams.UserInterface.Subscribe<NewFoodButtonPressedEvent>(NewFoodButtonPressedEventHandler)
            };

            foreach (var item in _startItems)
            {
                PlaceItem(item);
            }
        }

        private void NewFoodButtonPressedEventHandler(NewFoodButtonPressedEvent eventData)
        {
            PlaceItem(_itemPrefabs[0]);
        }

        private void UpdateInventoryCost(PurchasePriceChanged eventData)
        {
            var inventoryCost = 0;
            
            foreach (var cell in _cells)
            {
                if (cell.Item == null)
                {
                    continue;
                }

                inventoryCost += cell.Item.PurchasePrice;
            }

            EventStreams.UserInterface.Publish(new InventoryCostChanged(inventoryCost));
        }

        private void RefreshButtonClickedHandler(RefreshButtonClickedEvent eventData)
        {
            var allItems = (from cell in _cells where cell.Item != null select cell.Item).ToList();
            EventStreams.UserInterface.Publish(new ReturnMoneyFromItemsEvent(allItems));
            
            ClearCells();
            PlaceItem(_itemPrefabs[0], 0);
            PlaceItem(_itemPrefabs[0], 0);
        }

        private void OnDestroy()
        {
            _subscriptions?.Dispose();
        }
        
        public void Tutorial()
        {
            ClearCells();
            PlaceItem(_itemPrefabs[0], 0);
        }

        public bool HasEmptyCells()
        {
            return _cells.Any(cell => cell.IsEmpty);
        }

        public void PlaceItem(Item item, int purchaseCost = 0)
        {
            if (!HasEmptyCells())
            {
                return;
            }

            var emptyCell = _cells.FirstOrDefault(cell => cell.IsEmpty);
            var itemPrefab = _itemPrefabs.FirstOrDefault(prefab => prefab == item);
            if (emptyCell == null || itemPrefab == null)
            {
                return;
            }

            var spawnedItem = Instantiate(itemPrefab, Vector3.zero, Quaternion.identity); 
            spawnedItem.Initialize(_camera);
            emptyCell.AddItem(spawnedItem);

            if (purchaseCost == -1)
            {
                return;
            }
            spawnedItem.PurchasePrice = purchaseCost;
        }

        public void PlaceItem(Item item, Cell cell, int purchasePrice = 0)
        {
            var spawnedItem = Instantiate(item, Vector3.zero, Quaternion.identity);
            spawnedItem.Initialize(_camera);

            cell.AddItem(spawnedItem);
            spawnedItem.PurchasePrice = purchasePrice;
        }

        private void ClearCells()
        {
            foreach (var cell in _cells)
            {
                cell.Clear();
            }
        }

        private void ItemChangingCellHandler(ItemChangingCellEvent eventData)
        {
            var item = eventData.Item;
            
            var oldCell = eventData.OldCell;
            var newCell = eventData.NewCell;
            if (!newCell.IsEmpty)
            {
                return;
            }
            
            oldCell.ResetItem();
            newCell.AddItem(item);

            DisableAllAnimations();
        }
        
        private void MergeHandler(MergeEvent eventData)
        {
            var cell = eventData.Cell;
            var item = eventData.Item;

            var cellThatCollided = eventData.CellToMerge;
            var itemThatCollided = eventData.ItemToMerge;

            if (item.Level != itemThatCollided.Level)
            {
                cell.ResetItem();
                cellThatCollided.ResetItem();
                
                cell.AddItem(itemThatCollided);
                cellThatCollided.AddItem(item);

                cell.PlaceItemOnCell();
                cellThatCollided.PlaceItemOnCell();
                
                cell.CellAnimatorController.PLaySwapAnimation();
                cellThatCollided.CellAnimatorController.PLaySwapAnimation();
                
                return;
            }
            
            var level = item.Level;
            if (level < _maxLevel)
            {
                var newItem = _itemPrefabs[level];
                
                // TODO: исправить экран с открытием новой бомбы
                // _mergeScreen.OnScreenShownUnlockedBomb(newItem);

                //cell.CellAnimatorController.PlaySuccessfulMergeAnimation();
                cellThatCollided.CellAnimatorController.PlaySuccessfulMergeAnimation();
                
                Destroy(item.gameObject);
                Destroy(itemThatCollided.gameObject);
                
                var purchasePriceAfterMerge = item.PurchasePrice + itemThatCollided.PurchasePrice;
                cell.ResetItem();
                cellThatCollided.ResetItem();
                PlaceItem(newItem, cellThatCollided, purchasePriceAfterMerge);
            }
            else
            {
                EventStreams.UserInterface.Publish(new ItemMustBeReturnEvent(item));
            }
            
            DisableAllAnimations();
        }
        
        private void ReturnItemToPositionHandler(ItemMustBeReturnEvent eventData)
        {
            foreach (var cell in _cells.Where(cell => cell.Item == eventData.Item))
            {
                cell.PlaceItemOnCell();
            }

            DisableAllAnimations();
        }
        
        private void HighlightPossibleMerge(UserIsDraggingItemEvent eventData)
        {
            var item = eventData.Item;
            
            foreach (var cell in _cells)
            {
                if (cell.IsEmpty)
                {
                    continue;
                }
                
                var cellItem = cell.Item;

                if (item.IsAbleToMergeWith(cellItem, _maxLevel))
                {
                    cell.CellAnimatorController.PlayIsAbleToMergeAnimation();
                }
            }
        }
        
        private void CellHoveredHandler(CellHoveredEvent eventData)
        {
            foreach (var cell in _cells)
            {
                cell.CellAnimatorController.StopIsHoveredAnimation();
                
                if (cell.Item != null)
                {
                    cell.Item.AnimatorController.StopIsReadyToMergeAnimation();
                }
            }
            
            var cellAnimator = eventData.Cell.CellAnimatorController;
            
            if (cellAnimator.IsAbleToMerge())
            {
                var currentItem = eventData.Item;
                var itemInHoveredCell = eventData.Cell.Item;
                
                currentItem.AnimatorController.PlayIsReadyToMergeAnimation();
                itemInHoveredCell.AnimatorController.PlayIsReadyToMergeAnimation();
                return;
            }
            
            cellAnimator.PlayIsHoveredAnimation();
        }
        
        private void StopMergeFXAnimationHandler(StopMergeFXEvent eventData)
        {
            DisableAllItemsAnimations();
        }
        
        private void NewItemBuyingHandler(BuyItemEvent eventData)
        {
            var itemIndex = eventData.ItemLevel - 1;
            var itemPrefab = _itemPrefabs[itemIndex];
            
            PlaceItem(itemPrefab, eventData.PurchaseCost);
        }
        
        private void PlayButtonPressedEventHandler(PlayButtonPressedEvent eventData)
        {
            var items = new List<Item>();
            foreach (var cell in _cells)
            {
                if (!cell.IsEmpty)
                {
                    items.Add(cell.Item);
                }
            }

            DisableAllItemsAnimations();
            EventStreams.UserInterface.Publish(new MergeEndedEvent(items));
        }

        private void DisableAllAnimations()
        {
            DisableAllItemsAnimations();
            DisableAllCellsAnimations();
        }
        
        private void DisableAllItemsAnimations()
        {
            foreach (var cell in _cells)
            {
                var item = cell.Item;
                if (item == null)
                {
                    return;
                }
                
                item.AnimatorController.StopIsReadyToMergeAnimation();
            }
        }
        
        private void DisableAllCellsAnimations()
        {
            foreach (var cell in _cells)
            {
                cell.CellAnimatorController.StopIsAbleToMergeAnimation();
                cell.CellAnimatorController.StopIsHoveredAnimation();
            }
        }

        public void EnableItemsDragFeature()
        {
            foreach (var cell in _cells.Where(cell => cell.Item != null))
            {
                cell.Item.GetComponent<ItemDragController>().IsEnabled = true;
            }
        }

        public void DisableItemsDragFeature()
        {
            foreach (var cell in _cells.Where(cell => cell.Item != null))
            {
                cell.Item.GetComponent<ItemDragController>().IsEnabled = false;
            }
        }

        public List<Item> GetListItem()
        {
            return (from cell in _cells where cell.Item != null select cell.Item).ToList();
        }
    }
}
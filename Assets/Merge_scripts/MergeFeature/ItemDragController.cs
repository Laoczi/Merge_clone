using MergeFeature.Events;
using TMPro;
using UnityEngine;

namespace MergeFeature
{
    /// <summary>
    /// Управляет перетаскиванием предмета
    /// </summary>
    public class ItemDragController: MonoBehaviour
    {
        public bool IsEnabled = true;
        
        private const float OFFSET_Y = 1f;
        private Vector3 _initialPosition;
        
        private Item _item;
        
        private Transform _transform;
        private Camera _camera;
        private Vector3 _mouseOffset;
        private float _mouseZCoordinate;

        public void Initialize(Camera camera)
        {
            _transform = transform;
            _initialPosition = _transform.localPosition;
            _camera = camera;
            _item = GetComponent<Item>();
        }

        private void OnMouseDown()
        {
            if (!IsEnabled)
            {
                return;
            }
            
            EventStreams.UserInterface.Publish(new UserIsDraggingItemEvent(_item));
        }

        private void OnMouseDrag()
        {
            if (!IsEnabled)
            {
                return;
            }
            
            var ray = _camera.ScreenPointToRay(Input.mousePosition);
            foreach (var hit in Physics.RaycastAll(ray))
            {
                if (Physics.Raycast(ray))
                {
                    if (hit.collider.CompareTag(MergeFeatureTags.MERGE_CELL_TAG))
                    {
                        var cell = hit.collider.GetComponent<Cell>();
                        EventStreams.UserInterface.Publish(new CellHoveredEvent(_item, cell));
                        break;
                    }
                }
                
                EventStreams.UserInterface.Publish(new StopMergeFXEvent());
            }
            
            if (Physics.Raycast(ray, out var hitInformation, 2000, LayerMask.GetMask("MergeField")))
            {
                var position = new Vector3(hitInformation.point.x, OFFSET_Y, hitInformation.point.z);
                _transform.position = position;

                var localPosition = _transform.localPosition;
                localPosition = new Vector3(localPosition.x, _initialPosition.y + OFFSET_Y, localPosition.z);
                _transform.localPosition = localPosition;
            }
        }

        private void OnMouseUp()
        {
            if (!IsEnabled)
            {
                return;
            }
            
            HandleEndOfInput();
            EventStreams.UserInterface.Publish(new ItemMustBeReturnEvent(_item));
        }

        private void HandleEndOfInput()
        {
            if (!IsEnabled)
            {
                return;
            }
            
            var ray = _camera.ScreenPointToRay(Input.mousePosition);
            foreach (var hitInfo in Physics.RaycastAll(ray))
            {
                var other = hitInfo.collider.gameObject;
                if (!other.CompareTag(MergeFeatureTags.MERGE_CELL_TAG))
                {
                    continue; 
                }
                
                var cell = other.GetComponent<Cell>();
                var currentItem = _item;
                if (cell.Item == currentItem)
                {
                    continue;
                }
            
                if (cell.IsEmpty)
                {
                    var changingCellEvent = new ItemChangingCellEvent()
                    {
                        Item = currentItem,
                        OldCell = transform.parent.GetComponent<Cell>(),
                        NewCell = cell
                    };
                    EventStreams.UserInterface.Publish(changingCellEvent);
                }
                else
                {
                    var mergeEvent = new MergeEvent
                    {
                        Cell = transform.parent.GetComponent<Cell>(),
                        Item = currentItem,
                        CellToMerge = cell,
                        ItemToMerge = cell.Item
                    };
                    EventStreams.UserInterface.Publish(mergeEvent);
                }
            }
            EventStreams.UserInterface.Publish(new StopMergeFXEvent());
        }
        
        private Vector3 GetMouseWorldPosition()
        {
            var mousePoint = Input.mousePosition;
            mousePoint.z = _mouseZCoordinate;

            return _camera.ScreenToWorldPoint(mousePoint);
        }
    }
}

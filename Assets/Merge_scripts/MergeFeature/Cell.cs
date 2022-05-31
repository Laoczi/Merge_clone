using System;
using UnityEngine;

namespace MergeFeature
{
    /// <summary>
    /// Представляет клетку на поле для мержа
    /// </summary>
    [RequireComponent(typeof(Animator))]
    public class Cell : MonoBehaviour
    {
        [SerializeField]
        private float _yOffsetForItem = 0.75f;

        public Item Item { get; private set; }
        public CellAnimatorController CellAnimatorController { get; private set; }

        [SerializeField]
        private ParticleSystem _successfulMergeEffect;
        [SerializeField]
        private ParticleSystem _swapEffect;
        
        public bool IsEmpty => Item == null;

        private void Awake()
        {
            CellAnimatorController = new CellAnimatorController(GetComponent<Animator>(), _successfulMergeEffect, _swapEffect);
        }

        public void AddItem(Item item)
        {
            if (!IsEmpty)
            {
                throw new Exception("You are trying to add another item to one cell");
            }

            Item = item;
            Item.transform.parent = transform;
            PlaceItemOnCell();
        }

        public void PlaceItemOnCell()
        {
            var itemPosition = transform.position + new Vector3(0, _yOffsetForItem, 0);
            Item.transform.position = itemPosition;
        }

        public void Clear()
        {
            if (Item == null)
            {
                return;
            }
            
            Destroy(Item.gameObject);
            ResetItem();
        }

        public void ResetItem()
        {
            if (Item == null)
            {
                return;
            }
            
            Item = null;
        }
    }
}
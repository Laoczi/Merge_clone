using System;
using MergeFeature.Events;
using UnityEngine;

namespace MergeFeature
{
    /// <summary>
    /// Представляет собой предмет, который игрок может перетаскивать
    /// </summary>
    public class Item : MonoBehaviour
    {
        public ItemData Data => _data;
        public ItemAnimatorController AnimatorController;

        public int Level => Data.Level;
        public int PurchasePrice
        {
            get => _purchasePrice;
            set
            {
                _purchasePrice = value;
                EventStreams.UserInterface.Publish(new PurchasePriceChanged());
            }
        }

        [SerializeField]
        private ItemData _data;
        [SerializeField]
        private Animator _animator;
        [SerializeField]
        private ParticleSystem _ableToMergeParticleSystem;

        private int _purchasePrice;

        public void Initialize(Camera camera)
        {
            transform.localScale = Vector3.one;
            var dragController = gameObject.AddComponent<ItemDragController>();
            dragController.Initialize(camera);

            AnimatorController = new ItemAnimatorController(_animator, _ableToMergeParticleSystem);
            AnimatorController.PlaySuccessfulMergeAnimation();
        }

        public bool IsAbleToMergeWith(Item other, int maxLevel)
        {
            return Level == other.Level &&
                   Level != maxLevel &&
                   this != other;
        }
    }
}

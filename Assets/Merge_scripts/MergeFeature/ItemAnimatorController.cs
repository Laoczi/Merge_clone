using UnityEngine;

namespace MergeFeature
{
    public class ItemAnimatorController
    {
        private static readonly int IsReadyToMerge = Animator.StringToHash("isReadyToMerge");
        private static readonly int OnAppear = Animator.StringToHash("OnAppear");
        private static readonly int UnlockItem = Animator.StringToHash("UnlockItem");

        private ParticleSystem _ableToMergeAbleToMergeParticle;
        
        private Animator _animator;

        public ItemAnimatorController(Animator animator, ParticleSystem ableToMergeParticleSystem)
        {
            _animator = animator;
            _ableToMergeAbleToMergeParticle = ableToMergeParticleSystem;
        }

        public void PlayIsReadyToMergeAnimation()
        {
            _ableToMergeAbleToMergeParticle.Play();
            
            // _animator.SetBool(IsReadyToMerge, true);
        }

        public void StopIsReadyToMergeAnimation()
        {
            _ableToMergeAbleToMergeParticle.Stop();
            
            // _animator.SetBool(IsReadyToMerge, false);
        }

        public void PlaySuccessfulMergeAnimation()
        {
            _animator.SetTrigger(OnAppear);
        }
        
        public void PlayUnlockItem()
        {
            _animator.SetTrigger(UnlockItem);
        }
    }
}
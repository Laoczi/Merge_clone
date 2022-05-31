using UnityEngine;

namespace MergeFeature
{
    /// <summary>
    /// Аниматор клетки
    /// Включает и выключает ее анимации
    /// </summary>
    public class CellAnimatorController
    {
        private static readonly int AbleToMerge = Animator.StringToHash("isAbleToMerge");
        private static readonly int IsHovered = Animator.StringToHash("isHovered");
        
        private Animator _animator;
        private ParticleSystem _successfulMergeParticle;
        private ParticleSystem _swapParticle;
        
        public CellAnimatorController(Animator animator, ParticleSystem successfulMergeParticle, ParticleSystem swapParticle)
        {
            _animator = animator;
            _successfulMergeParticle = successfulMergeParticle;
            _swapParticle = swapParticle;
        }

        public bool IsAbleToMerge()
        {
            return _animator.GetBool(AbleToMerge);
        }

        public void PlaySuccessfulMergeAnimation()
        {
            _successfulMergeParticle.Play();
        }

        public void PLaySwapAnimation()
        {
            _swapParticle.Play();
        }

        public void PlayIsAbleToMergeAnimation()
        {
            _animator.SetBool(AbleToMerge, true);
        }

        public void StopIsAbleToMergeAnimation()
        {
            _animator.SetBool(AbleToMerge, false);
        }

        public void PlayIsHoveredAnimation()
        {
            _animator.SetBool(IsHovered, true);
        }
        
        public void StopIsHoveredAnimation()
        {
            _animator.SetBool(IsHovered, false);
        }
    }
}
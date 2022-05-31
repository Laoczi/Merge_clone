using UnityEngine;

namespace Enemies
{
    public class EnemyAnimatorController
    {
        private static readonly int Move = Animator.StringToHash("Move");
        private static readonly int Attack = Animator.StringToHash("Attack");

        private readonly Animator _animator;

        public EnemyAnimatorController(Animator animator)
        {
            _animator = animator;
        }
        
        public void PlayMoveAnimation()
        {
            _animator.SetTrigger(Move);
        }
        
        public void PlayAttackAnimation()
        {
            _animator.SetTrigger(Attack);
        }
    }
}

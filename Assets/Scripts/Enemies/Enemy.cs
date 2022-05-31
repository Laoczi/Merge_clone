using System;
using Events;
using UnityEngine;
using UnityEngine.AI;
using Player = Player.Player;

namespace Enemies
{
    [RequireComponent(typeof(NavMeshAgent))]
    [RequireComponent(typeof(Collider))]
    public class Enemy : MonoBehaviour
    {
        public event Action<Enemy> OnPlayerReached;
        public bool IsPlayerReached = false;
        
        private EnemyAnimatorController _animatorController;
        private NavMeshAgent _navMeshAgent;

        private global::Player.Player _player;
        
        [SerializeField]
        private int _damage = 10;
        [SerializeField]
        private Weapon _weapon;
        
        private void Awake()
        {
            _navMeshAgent = GetComponent<NavMeshAgent>();
            _animatorController = new EnemyAnimatorController(GetComponent<Animator>());
            _weapon.Initialize(_damage);
            
            EventStreams.UserInterface.Publish(new EnemySpawnedEvent(this));
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("Player"))
            {
                _animatorController.PlayAttackAnimation();
                OnPlayerReached?.Invoke(this);
                IsPlayerReached = true;
            }
        }

        private void Update()
        {
            if (IsPlayerReached && _player != null)
            {
                transform.LookAt(_player.transform);
                _animatorController.PlayAttackAnimation();
            }
        }

        public void MoveTo(Transform target)
        {
            if (IsPlayerReached)
            {
                return;
            }
            
            _navMeshAgent.SetDestination(target.position);
            _animatorController.PlayMoveAnimation();
        }

        public void AttackPlayer(global::Player.Player player)
        {
            _player = player;
        }
    }
}

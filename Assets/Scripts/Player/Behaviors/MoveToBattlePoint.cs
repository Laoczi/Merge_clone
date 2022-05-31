using BehaviorDesigner.Runtime.Tasks;
using Enemies;
using UnityEngine;
using UnityEngine.AI;

namespace Player.Behaviors
{
    public class MoveToBattlePoint : Action
    {
        public NavMeshAgent NavMeshAgent;
        private Vector3 _battlePoint;
        private bool _isReadyForBattle;

        public void Initialize(AgrRegion agrRegion, Vector3 battlePoint)
        {
            _battlePoint = battlePoint;
            agrRegion.OnEnemyGetIntoAgrRegion += StartBattle;
        }

        public override TaskStatus OnUpdate()
        {
            if (_isReadyForBattle)
            {
                return TaskStatus.Success;
            }
            
            NavMeshAgent.destination = _battlePoint;
            return TaskStatus.Running;
        }

        private void StartBattle(Enemy enemy)
        {
            _isReadyForBattle = true;
        }
    }
}
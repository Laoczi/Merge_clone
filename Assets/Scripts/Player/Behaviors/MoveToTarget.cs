using BehaviorDesigner.Runtime.Tasks;
using Enemies;
using UnityEngine;
using UnityEngine.AI;

namespace Player.Behaviors
{
    public class MoveToTarget : Action
    {
        public NavMeshAgent NavMeshAgent;
        public FindNewTarget FindNewTarget;
        private Enemy _target;

        public override void OnStart()
        {
            _target = FindNewTarget.Target;

            var targetPosition = _target.transform.position;
            var relativePosition = 
                new Vector3(targetPosition.x - transform.position.x,0f, targetPosition.z - transform.position.z);
            transform.rotation = Quaternion.LookRotation(relativePosition);
        }

        public override TaskStatus OnUpdate()
        {
            if (Vector3.Distance(transform.position, _target.transform.position) <= 4f) 
            {
                return TaskStatus.Success;
            }
            
            NavMeshAgent.destination = _target.transform.position;
            return TaskStatus.Running;
        }
    }
}
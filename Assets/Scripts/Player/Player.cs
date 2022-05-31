using BehaviorDesigner.Runtime;
using Events;
using Player.Behaviors;
using UnityEngine;

namespace Player
{
    public class Player : MonoBehaviour
    {
        [SerializeField] 
        private RotationController _rotationController;
        
        [SerializeField] 
        private AgrRegion _agrRegion;

        [SerializeField] 
        private BehaviorTree _behaviorTree;
        
        private Targets _targets;
        
        public void Initialize(Vector3 battlePoint)
        {
            _targets = new Targets(this, _agrRegion);
            _rotationController.Initialize(this);

            var moveToBattlePointBehavior = _behaviorTree.FindTask<MoveToBattlePoint>();
            moveToBattlePointBehavior.Initialize(_agrRegion, battlePoint);

            var findBehavior = _behaviorTree.FindTask<FindNewTarget>();
            findBehavior.Initialize(_targets);
            
            var moveBehavior = _behaviorTree.FindTask<MoveToTarget>();
            moveBehavior.FindNewTarget = findBehavior;

            _rotationController.OnPlayerRotated += StartBehaviorTree;
        }

        private void StartBehaviorTree()
        {
            _behaviorTree.enabled = true;
            EventStreams.UserInterface.Publish(new PlayerSpawnedEvent(this));
        }

        private void OnDestroy()
        {
            _rotationController.Dispose();
            _targets?.Dispose();
        }
    }
}
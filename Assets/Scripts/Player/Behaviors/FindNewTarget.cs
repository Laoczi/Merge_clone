using BehaviorDesigner.Runtime.Tasks;
using Enemies;
using Events;

namespace Player.Behaviors
{
    public class FindNewTarget : Action
    {
        public Enemy Target;
        private Targets _targets;

        public void Initialize(Targets targets)
        {
            _targets = targets;
        }

        public override TaskStatus OnUpdate()
        {
            if (_targets.GetEnemiesNumber() > 0)
            {
                Target = _targets.FindNearestEnemy();
                return TaskStatus.Success;
            }

            EventStreams.UserInterface.Publish(new LevelPassedEvent());
            return TaskStatus.Failure;
        }
    }
}
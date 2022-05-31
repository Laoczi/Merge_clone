using Enemies;
using SimpleEventBus.Events;

namespace Events
{
    public class EnemySpawnedEvent: EventBase
    {
        public Enemy Enemy { get; }
        
        public EnemySpawnedEvent(Enemy enemy)
        {
            Enemy = enemy;
        }
    }
}

using Enemies;
using SimpleEventBus.Events;
using UnityEngine;

namespace Events
{
    public class EnemyDiedEvent : EventBase
    {
        public Enemy Enemy { get; }

        public EnemyDiedEvent(GameObject enemy)
        {
            Enemy = enemy.GetComponent<Enemy>();
        }
    }
}
using System;
using Events;
using UniRx;
using UnityEngine;

namespace Enemies
{
    public class HealthController : MonoBehaviour
    {
        public ReactiveProperty<float> Health { get; private set; }

        [SerializeField] 
        private int _health;

        private int _maxHealth;
        
        private void Awake()
        {
            _maxHealth = _health;
            Health = new ReactiveProperty<float>(1);
        }

        public void TakeDamage(int damage)
        {
            _health -= damage;
            Health.Value = Mathf.Clamp01((float)_health / _maxHealth);
            
            if (_health <= 0)
            {
                EventStreams.UserInterface.Publish(new EnemyDiedEvent(gameObject));
            }
        }
    }
}
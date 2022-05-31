using System;
using System.Collections.Generic;
using Enemies;
using Events;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace Player
{
    public class Targets : IDisposable
    {
        private AgrRegion _agrRegion;
        private Player _player;
        private List<Enemy> _enemies = new();
    
        private CompositeDisposable _subscriptions;

        public Targets(Player player, AgrRegion agrRegion)
        {
            _player = player;
            _agrRegion = agrRegion;
            _agrRegion.OnEnemyGetIntoAgrRegion += AddEnemy;
            _agrRegion.OnEnemyGetOutAgrRegion += RemoveEnemy;
        
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<EnemyDiedEvent>(EnemyDiedEventHandler),
                EventStreams.UserInterface.Subscribe<PlayButtonPressedEvent>(PlayButtonPressedEventHandler)
            };
        }

        public int GetEnemiesNumber()
        {
            return _enemies.Count;
        }
    
        public Enemy FindNearestEnemy()
        {
            var nearestEnemy = _enemies[0];
            var minDistance = Vector3.Distance(_player.transform.position, nearestEnemy.transform.position);
        
            foreach (var enemy in _enemies)
            {
                var distanceToCurrentEnemy = Vector3.Distance(_player.transform.position, enemy.transform.position);
                if (distanceToCurrentEnemy < minDistance)
                {
                    nearestEnemy = enemy;
                    minDistance = distanceToCurrentEnemy;
                }
            }

            return nearestEnemy;
        }
    
        private void AddEnemy(Enemy enemy)
        {
            _enemies.Add(enemy);
        }
    
        private void RemoveEnemy(Enemy enemy)
        {
            _enemies.Remove(enemy);
        }
    
        private void EnemyDiedEventHandler(EnemyDiedEvent eventData)
        {
            _enemies.Remove(eventData.Enemy);
        }
    
        private void PlayButtonPressedEventHandler(PlayButtonPressedEvent eventData)
        {
            _enemies.Clear();
        }

        public void Dispose()
        {
            _subscriptions?.Dispose();
        }
    }
}
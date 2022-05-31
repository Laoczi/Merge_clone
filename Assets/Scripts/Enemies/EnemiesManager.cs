using System;
using System.Collections.Generic;
using Events;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace Enemies
{
    public class EnemiesManager : MonoBehaviour
    {
        [SerializeField]
        private List<Enemy> _enemies = new List<Enemy>();

        private Player.Player _player;

        private CompositeDisposable _subscriptions;

        private void Awake()
        {
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<EnemySpawnedEvent>(_ =>
                {
                    _enemies.Add(_.Enemy);
                    _.Enemy.OnPlayerReached += OnPlayerReached;
                }),
                EventStreams.UserInterface.Subscribe<EnemyDiedEvent>(_ => _enemies.Remove(_.Enemy)),

                EventStreams.UserInterface.Subscribe<PlayerSpawnedEvent>(_ => _player = _.Player),
            };
        }

        private void OnPlayerReached(Enemy enemy)
        {
            enemy.OnPlayerReached -= OnPlayerReached;
            enemy.AttackPlayer(_player);
        }

        private void Update()
        {
            if (_player == null)
            {
                return;
            }

            MoveEnemies();
        }

        private void OnDestroy()
        {
            _subscriptions?.Dispose();
        }

        private void MoveEnemies()
        {
            foreach (var enemy in _enemies)
            {
                enemy.MoveTo(_player.transform);
            }
        }
    }
}

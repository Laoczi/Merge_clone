using System.Collections.Generic;
using Events;
using GameControllers;
using GameServices;
using ScreenManager.Core;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace Screens.LevelScreen
{
    public class LevelScreen : UIScreen<LevelScreenContext>
    {
        [SerializeField] 
        private Transform _root;

        [SerializeField] 
        private Transform _battlePoint;

        [SerializeField] 
        private FoodMovementController _foodMovementController;
        
        [SerializeField]
        private List<ParticleSystem> _winParticles;

        private PlayerViewService _playerViewService;
        
        private CompositeDisposable _subscriptions;

        public override void Initialize(LevelScreenContext context)
        {
            _playerViewService = context.PlayerViewService;
            _playerViewService.Initialize(context.UserProfile, context.PlayerViewSettingsProvider, 
                _root);
            
            _foodMovementController.Initialize(_playerViewService);
            
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<BattleStartEvent>(BattleStartEventHandler),
                EventStreams.UserInterface.Subscribe<LevelPassedEvent>(PlayWinParticles)
            };
        }

        private void BattleStartEventHandler(BattleStartEvent eventData)
        {
            _playerViewService.CurrentPlayer.Initialize(_battlePoint.position);
        }
        
        private void PlayWinParticles(LevelPassedEvent eventData)
        {
            foreach (var particles in _winParticles)
            {
                particles.Play();
            }
        }

        private void OnDisable()
        {
            _subscriptions?.Dispose();
        }
    }
}
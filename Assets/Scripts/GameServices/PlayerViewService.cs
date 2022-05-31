using System;
using System.Collections;
using DefaultNamespace;
using Events;
using UnityEngine;
using Object = UnityEngine.Object;
using UniRx;
using CompositeDisposable = SimpleEventBus.Disposables.CompositeDisposable;

namespace GameServices
{
    public class PlayerViewService : IDisposable
    {
        public IReadOnlyReactiveProperty<float> CurrentLevelPower => _currentLevelPower;
        public Player.Player CurrentPlayer => _currentPlayer;

        private IPlayerViewSettingsProvider _playerViewSettings;
        private UserProfile _userProfile;
        private Player.Player _currentPlayer;
        private Transform _root;

        private float _powerScalingTime;
        private ReactiveProperty<float> _currentLevelPower;
        private Coroutine _addPowerCoroutine;

        private CompositeDisposable _subscriptions;

        public void Initialize(UserProfile userProfile, IPlayerViewSettingsProvider playerViewSettings, Transform root)
        {
            _userProfile = userProfile;
            _playerViewSettings = playerViewSettings;
            _root = root;

            _currentLevelPower = new ReactiveProperty<float>(0);
            
            _subscriptions = new CompositeDisposable
            {
                _userProfile.PowerValue.Subscribe(UpgradeLevel),
                _userProfile.PowerLevel.Subscribe(UpgradeView)
            };
        }

        public void SetCalculatingTime(float calculatingTime)
        {
            _powerScalingTime = calculatingTime;
        }

        public IEnumerator AddValue(int value)
        {
            var startValue = (int) _currentLevelPower.Value;
            var finishValue = (int)(_currentLevelPower.Value + value); 
            var levelValueCapacity = GetLevelValueCapacity();

            while (finishValue > 0)
            {
                var valueTowardsLevelUp = levelValueCapacity - startValue;
                var calculatingTime = _powerScalingTime * valueTowardsLevelUp / levelValueCapacity;

                var currentLevelMaxValue = (int) Mathf.Min(finishValue, levelValueCapacity);
                var currentTime = 0f;

                while (_currentLevelPower.Value < currentLevelMaxValue)
                {
                    _currentLevelPower.Value = Mathf.Lerp(startValue, levelValueCapacity, currentTime / calculatingTime);
                    currentTime += Time.deltaTime;

                    yield return null;
                }

                _userProfile.PowerValue.Value += currentLevelMaxValue - startValue;
                finishValue -= currentLevelMaxValue;

                if (currentLevelMaxValue >= levelValueCapacity)
                {
                    _currentLevelPower.Value = 0;
                    startValue = 0;
                    levelValueCapacity = GetLevelValueCapacity();
                }
            }
        }

        private float GetLevelValueCapacity()
        {
            var level = _userProfile.PowerLevel.Value;
            float valueCapacity = _playerViewSettings.GetPowerCapacity(level);
            return valueCapacity;
        }

        private void UpgradeLevel(int points)
        {
            var level = _playerViewSettings.GetLevel(points);
            _userProfile.PowerLevel.Value = level;
        }

        private void UpgradeView(int level)
        {
            if (_currentPlayer != null)
            {
                Object.Destroy(_currentPlayer.gameObject);
            }

            var prefab = _playerViewSettings.GetPrefab(level);
            _currentPlayer = Object.Instantiate(prefab, _root).GetComponent<Player.Player>();
            
            EventStreams.UserInterface.Publish(new PlayerChangedViewEvent());
        }

        public void Dispose()
        {
            _subscriptions?.Dispose();
        }
    }
}
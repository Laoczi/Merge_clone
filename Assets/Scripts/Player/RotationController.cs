using System;
using System.Collections;
using Events;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace Player
{
    [Serializable]
    public class RotationController : IDisposable
    {
        public Action OnPlayerRotated;
        
        [SerializeField] 
        private float _rotationTime = 1.5f;

        [SerializeField] 
        private Vector3 _battleRotation;
        
        [SerializeField] 
        private Vector3 _winRotation;

        private Player _player;

        private CompositeDisposable _subscriptions;

        public void Initialize (Player player)
        {
            _player = player;
            _player.StartCoroutine(Rotate(_battleRotation));

            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<LevelPassedEvent>(LevelPassedEventHandler)
            };
        }

        private void LevelPassedEventHandler(LevelPassedEvent eventData)
        {
            _player.StartCoroutine(Rotate(_winRotation));
        }

        private IEnumerator Rotate(Vector3 targetRotation)
        {
            var currentTime = 0f;
            var startRotation = _player.transform.rotation;
            var finishRotation = targetRotation;
            
            while (currentTime < _rotationTime)
            {
                _player.transform.rotation = Quaternion.Lerp(
                    startRotation, Quaternion.Euler(finishRotation), currentTime / _rotationTime);

                currentTime += Time.deltaTime;

                yield return null;
            }
            
            _player.transform.rotation = Quaternion.Euler(targetRotation);
            OnPlayerRotated?.Invoke();
        }


        public void Dispose()
        {
            _subscriptions?.Dispose();
        }
    }
}

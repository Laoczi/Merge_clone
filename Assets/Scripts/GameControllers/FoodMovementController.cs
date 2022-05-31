using System.Collections;
using System.Collections.Generic;
using Events;
using GameServices;
using MergeFeature;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace GameControllers
{
    /// <summary>
    /// Класс, отвечающий за перемещение еды к монстру
    /// </summary>
    public class FoodMovementController : MonoBehaviour
    {
        [SerializeField] 
        private float _movementTime = 1f;

        [SerializeField] 
        private float _targetScale = 0.2f;

        [SerializeField] 
        private Transform _root;

        [SerializeField] 
        private Transform _circleCenter;

        private PlayerViewService _playerViewService;

        private float _scaleModifier;
        private CompositeDisposable _subscriptions;

        private void Awake()
        {
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<MergeEndedEvent>(MergeEndedEventHandler)
            };
        }

        public void Initialize(PlayerViewService playerViewService)
        {
            _playerViewService = playerViewService;
        }

        private void MergeEndedEventHandler(MergeEndedEvent eventData)
        {
            StartCoroutine(Feed(eventData.Items));
        }

        private IEnumerator Feed(List<Item> items)
        {
            foreach (var currentItem in items)
            {
                var currentTime = 0f;
                var startPosition = currentItem.transform.position;
                var startScale = currentItem.transform.localScale;
                _scaleModifier = 1;
                var startValue = _scaleModifier;
                
                while (currentTime < _movementTime)
                {
                    ChangeFoodPosition(startPosition, currentTime, currentItem.gameObject);
                    ChangeFoodScale(startValue, currentTime, currentItem.gameObject, startScale);
                    
                    currentTime += Time.deltaTime;
                    yield return null;
                }
                
                EventStreams.UserInterface.Publish(new ItemEndMovementEvent(transform.position));
                Destroy(currentItem.gameObject);
                yield return StartCoroutine(_playerViewService.AddValue(currentItem.Data.Value));
            }

            EventStreams.UserInterface.Publish(new BattleStartEvent(_playerViewService.CurrentPlayer));
        }

        private void ChangeFoodScale(float startValue, float currentTime, GameObject currentFood, Vector3 startScale)
        {
            _scaleModifier = Mathf.Lerp(startValue, _targetScale, currentTime / _movementTime);
            currentFood.transform.localScale = startScale * _scaleModifier;
        }

        private void ChangeFoodPosition(Vector3 startPosition, float currentTime, GameObject currentFood)
        {
            var foodPosition =
                Vector3.Slerp(startPosition - _circleCenter.position,
                    _root.position - _circleCenter.position,
                    currentTime / _movementTime) + _circleCenter.position;
            currentFood.transform.position = foodPosition;
        }

        private void OnDestroy()
        {
            _subscriptions?.Dispose();
        }
    }
}
using System.Collections;
using Events;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace GameControllers
{
    public class CameraController : MonoBehaviour
    {
        [SerializeField] 
        private Vector3 _startOffset;
        
        [SerializeField] 
        private Vector3 _battleOffset;

        [SerializeField] 
        private Vector3 _battleRotation;

        [SerializeField]
        private Transform _playerTransform;

        [SerializeField] 
        private float _cameraMovementTime = 1.5f;

        private Vector3 _offset;

        private CompositeDisposable _subscriptions;

        private void Awake()
        {
            _offset = _startOffset;
            
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<BattleStartEvent>(BattleStartEventHandler)
            };
        }
        
        private void LateUpdate()
        {
            transform.position = _playerTransform.position + _offset;
        }

        private void BattleStartEventHandler(BattleStartEvent eventData)
        {
            _playerTransform = eventData.Player.transform;
            StartCoroutine(MoveCamera());
        }

        private IEnumerator MoveCamera()
        {
            var currentTime = 0f;
            var startPosition = _startOffset;
            var finishPosition = _battleOffset;

            var startRotation = transform.rotation;
            var finishRotation = _battleRotation;
            
            while (currentTime < _cameraMovementTime)
            {
                _offset = Vector3.Lerp(startPosition, finishPosition, currentTime / _cameraMovementTime);
                
                transform.rotation = Quaternion.Lerp(
                    startRotation, Quaternion.Euler(finishRotation), currentTime / _cameraMovementTime);
                
                currentTime += Time.deltaTime;

                yield return null;
            }

            _offset = _battleOffset;
            transform.rotation = Quaternion.Euler(_battleRotation);
        }

        private void OnDestroy()
        {
            _subscriptions?.Dispose();
        }
    }
}
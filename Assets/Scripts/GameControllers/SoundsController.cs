using Events;
using UniRx;
using UnityEngine;

namespace GameControllers
{
    public class SoundsController : MonoBehaviour
    {
        [SerializeField] 
        private AudioSource _playButtonSound;
        
        [SerializeField] 
        private AudioSource _addButtonSound;

        [SerializeField] 
        private AudioClip[] _eatingSounds;
        
        private CompositeDisposable _subscriptions;
        
        private void Awake()
        {
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<PlayButtonPressedEvent>(PlayButtonPressedEventHandler),
                EventStreams.UserInterface.Subscribe<NewFoodButtonPressedEvent>(NewFoodButtonPressedEventHandler),
                EventStreams.UserInterface.Subscribe<NewMonsterButtonPressedEvent>(NewMonsterButtonPressedEventHandler),
                EventStreams.UserInterface.Subscribe<ItemEndMovementEvent>(ItemEndMovementEventHandler)
            };
        }

        private void PlayButtonPressedEventHandler(PlayButtonPressedEvent eventData)
        {
            _playButtonSound.Play();   
        }

        private void NewFoodButtonPressedEventHandler(NewFoodButtonPressedEvent eventData)
        {
            _addButtonSound.Play();
        }

        private void NewMonsterButtonPressedEventHandler(NewMonsterButtonPressedEvent eventData)
        {
            _addButtonSound.Play();
        }
        
        private void ItemEndMovementEventHandler(ItemEndMovementEvent eventData)
        {
            var position = eventData.ItemPosition;
            var index = Random.Range(0, _eatingSounds.Length - 1);
            AudioSource.PlayClipAtPoint(_eatingSounds[index], position);
        }

        private void OnDestroy()
        {
            _subscriptions?.Dispose();
        }
    }
}
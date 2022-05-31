using MergeFeature.Events;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace Screens.MergeHUD
{
    public class CursorViewController : MonoBehaviour
    {
        [SerializeField] 
        private Texture2D _defaultCursor;
        
        [SerializeField] 
        private Texture2D _onClickCursor;

        private CompositeDisposable _subscriptions;

        private void Awake()
        {
            Cursor.SetCursor(_defaultCursor, Vector2.zero, CursorMode.Auto);

            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<UserIsDraggingItemEvent>(UserIsDraggingItemEventHandler),
                EventStreams.UserInterface.Subscribe<ItemMustBeReturnEvent>(ItemMustBeReturnEventHandler)
            };
        }

        private void ItemMustBeReturnEventHandler(ItemMustBeReturnEvent obj)
        {
            Cursor.SetCursor(_defaultCursor, Vector2.zero, CursorMode.Auto);
        }

        private void UserIsDraggingItemEventHandler(UserIsDraggingItemEvent obj)
        {
            Cursor.SetCursor(_onClickCursor, Vector2.zero, CursorMode.Auto);
        }

        private void OnDestroy()
        {
            _subscriptions?.Dispose();
        }
    }
}
using SimpleEventBus.Events;

namespace MergeFeature.Events
{
    public class UserIsDraggingItemEvent: EventBase
    {
        public Item Item;

        public UserIsDraggingItemEvent(Item item)
        {
            Item = item;
        }
    }
}
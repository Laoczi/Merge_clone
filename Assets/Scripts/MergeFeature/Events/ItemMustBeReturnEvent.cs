using SimpleEventBus.Events;

namespace MergeFeature.Events
{
    /// <summary>
    /// Ивент вызывается когда необходимо вернуть предмет обратно
    /// (например, если вывел предмет за границы мержа)
    /// </summary>
    public class ItemMustBeReturnEvent: EventBase
    {
        public readonly Item Item;
        
        public ItemMustBeReturnEvent(Item item)
        {
            Item = item;
        }
    }
}
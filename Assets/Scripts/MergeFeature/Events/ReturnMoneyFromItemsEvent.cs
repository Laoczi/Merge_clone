using System.Collections.Generic;
using SimpleEventBus.Events;

namespace MergeFeature.Events
{
    public class ReturnMoneyFromItemsEvent: EventBase
    {
        public List<Item> Items => _items;
        private List<Item> _items;

        public ReturnMoneyFromItemsEvent(List<Item> items)
        {
            _items = items;
        }
    }
}

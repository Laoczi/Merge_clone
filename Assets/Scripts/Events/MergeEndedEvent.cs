using System.Collections.Generic;
using MergeFeature;
using SimpleEventBus.Events;

namespace Events
{
    public class MergeEndedEvent : EventBase
    {
        public List<Item> Items { get; }
        public MergeEndedEvent(List<Item> items)
        {
            Items = items;
        }
    }
}
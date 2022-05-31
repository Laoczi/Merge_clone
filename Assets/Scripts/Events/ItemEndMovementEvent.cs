using SimpleEventBus.Events;
using UnityEngine;

namespace Events
{
    public class ItemEndMovementEvent : EventBase
    {
        public Vector3 ItemPosition { get; }
        public ItemEndMovementEvent(Vector3 transformPosition)
        {
            ItemPosition = transformPosition;
        }
    }
}
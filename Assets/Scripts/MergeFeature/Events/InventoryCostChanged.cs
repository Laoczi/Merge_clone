using SimpleEventBus.Events;

namespace MergeFeature.Events
{
    public class InventoryCostChanged: EventBase
    {
        public int InventoryCost { get; private set; }

        public InventoryCostChanged(int inventoryCost)
        {
            InventoryCost = inventoryCost;
        }
    }
}

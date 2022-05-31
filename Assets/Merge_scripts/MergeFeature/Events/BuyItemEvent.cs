using SimpleEventBus.Events;

namespace MergeFeature.Events
{
    public class BuyItemEvent: EventBase
    {
        public int ItemLevel { get; }
        public int PurchaseCost { get; }
        
        public BuyItemEvent(int itemLevel, int purchaseCost)
        {
            ItemLevel = itemLevel;
            PurchaseCost = purchaseCost;
        }
    }
}
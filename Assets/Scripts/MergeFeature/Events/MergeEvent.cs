using SimpleEventBus.Events;

namespace MergeFeature.Events
{
    /// <summary>
    /// Ивент мержа, вызыввается, когда предмет перетаскивается
    /// на клетку, где есть другой предмет
    /// </summary>
    public class MergeEvent: EventBase
    {
        public Cell Cell;
        public Item Item;

        public Cell CellToMerge;
        public Item ItemToMerge;
    }
}
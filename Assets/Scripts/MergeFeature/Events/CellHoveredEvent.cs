using SimpleEventBus.Events;

namespace MergeFeature.Events
{
    /// <summary>
    /// Ивент падает когда игрок перетаскивает предмет и проводит им над клеткой
    /// </summary>
    public class CellHoveredEvent: EventBase
    {
        public Item Item;
        public Cell Cell;
        
        public CellHoveredEvent(Item item, Cell cell)
        {
            Item = item;
            Cell = cell;
        }
    }
}
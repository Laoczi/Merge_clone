using SimpleEventBus.Events;

namespace MergeFeature.Events
{
    /// <summary>
    /// Ивент падает, когда игрок перемещает предмет из одной клетки в другую
    /// </summary>
    public class ItemChangingCellEvent: EventBase
    {
        public Item Item;
        public Cell OldCell;
        public Cell NewCell;
    }
}
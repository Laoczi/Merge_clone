using SimpleEventBus.Events;

namespace Events
{
    public class BattleStartEvent : EventBase
    {
        public Player.Player Player { get; }
        
        public BattleStartEvent(Player.Player player)
        {
            Player = player;
        }
    }
}
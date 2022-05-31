using SimpleEventBus.Events;

namespace Events
{
    public class PlayerSpawnedEvent : EventBase
    {
        public Player.Player Player { get; }

        public PlayerSpawnedEvent(Player.Player player)
        {
            Player = player;
        }
    }
}

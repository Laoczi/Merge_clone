using DefaultNamespace;
using GameServices;

namespace Screens.LevelScreen
{
    public class LevelScreenContext
    {
        public IPlayerViewSettingsProvider PlayerViewSettingsProvider { get; }
        public UserProfile UserProfile { get; }
        public PlayerViewService PlayerViewService { get; }
        public LevelScreenContext(IPlayerViewSettingsProvider playerViewSettingsProvider, UserProfile userProfile,
            PlayerViewService playerViewService)
        {
            PlayerViewSettingsProvider = playerViewSettingsProvider;
            UserProfile = userProfile;
            PlayerViewService = playerViewService;
        }
    }
}
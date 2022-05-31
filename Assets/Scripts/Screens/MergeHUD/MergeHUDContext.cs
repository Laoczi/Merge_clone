using DefaultNamespace;
using GameServices;

namespace Screens.MergeHUD
{
    public class MergeHUDContext
    {
        public IMoneyService MoneyService { get;}
        public UserProfile UserProfile { get; }
        public IPlayerViewSettingsProvider PlayerViewSettings { get; }
        public PlayerViewService PlayerViewService { get; }
        
        public MergeHUDContext(IMoneyService moneyService, UserProfile userProfile, 
            IPlayerViewSettingsProvider playerViewSettings, PlayerViewService playerViewService)
        {
            MoneyService = moneyService;
            UserProfile = userProfile;
            PlayerViewSettings = playerViewSettings;
            PlayerViewService = playerViewService;
        }
    }
}
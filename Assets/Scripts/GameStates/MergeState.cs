using DefaultNamespace;
using Events;
using GameServices;
using IngameStateMachine;
using Screens.MergeHUD;
using SimpleEventBus.Disposables;

namespace GameStates
{
    public class MergeState : IState
    {
        private readonly IMoneyService _moneyService;
        private readonly UserProfile _userProfile;
        private readonly IPlayerViewSettingsProvider _playerViewSettingsProvider;
        private readonly PlayerViewService _playerViewService;

        private StateMachine _stateMachine;
        private CompositeDisposable _subscriptions;

        public MergeState(IMoneyService moneyService, UserProfile userProfile, 
            IPlayerViewSettingsProvider playerViewSettingsProvider, PlayerViewService playerViewService)
        {
            _moneyService = moneyService;
            _userProfile = userProfile;
            _playerViewSettingsProvider = playerViewSettingsProvider;
            _playerViewService = playerViewService;
        }

        public void Initialize(StateMachine stateMachine)
        {
            _stateMachine = stateMachine;
        }
        
        public void OnEnter()
        {
            ScreensManager.OpenScreen<MergeHUD, MergeHUDContext>(new MergeHUDContext(_moneyService, _userProfile, 
                _playerViewSettingsProvider, _playerViewService));
            
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<PlayButtonPressedEvent>(PlayButtonPressedEventHandler)
            };
        }

        private void PlayButtonPressedEventHandler(PlayButtonPressedEvent eventData)
        {
            _stateMachine.Enter<FeedingState>();
        }

        public void OnExit()
        {
            _subscriptions?.Dispose();
        }
    }
}
  
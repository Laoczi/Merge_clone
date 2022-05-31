using DefaultNamespace;
using GameServices;
using GameStates;
using IngameStateMachine;
using Screens.LevelScreen;
using UnityEngine;

namespace ScreenManager.Loaders.Scenes
{
    public class MainManager : MonoBehaviour
    {
        [SerializeField]
        private UserInfo _userInfo;

        [SerializeField] 
        private PlayerViewSettingsProvider _playerViewSettingsProvider;
        
        private IMoneyService _moneyService;
        private UserProfile _userProfile;
        private PlayerViewService _playerViewService;
        
        private StateMachine _stateMachine;
        
        public void Awake()
        {
            _userProfile = new UserProfile();
            InitializeConfigurationsProviders();
            CreateGameServices(_userProfile);
            
            ScreensManager.OpenScreen<LevelScreen, LevelScreenContext>(
                new LevelScreenContext(_playerViewSettingsProvider, _userProfile, _playerViewService));
            
            
            CreateAndInitializeStateMachine();
        }
        
        private void InitializeConfigurationsProviders()
        {
            _playerViewSettingsProvider.Initialize();
        }
        
        private void CreateGameServices(UserProfile userProfile)
        {
            _moneyService = new MoneyService(userProfile);
            _playerViewService = new PlayerViewService();
        }

        private void CreateAndInitializeStateMachine()
        {
            var states = new IState[]
            {
                new MergeState(_moneyService, _userProfile, _playerViewSettingsProvider, _playerViewService),
                new FeedingState(),
                new BattleState(),
                new WinState()
            };

            _stateMachine = new StateMachine(states);
            _stateMachine.Initialize();
            _stateMachine.Enter<MergeState>();
        }
    }
}
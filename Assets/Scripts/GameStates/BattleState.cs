using Events;
using IngameStateMachine;
using Screens.BattleHUD;
using SimpleEventBus.Disposables;

namespace GameStates
{
    public class BattleState : IState
    {
        private StateMachine _stateMachine;
        private CompositeDisposable _subscriptions;

        public void Initialize(StateMachine stateMachine)
        {
            _stateMachine = stateMachine;
        }
        
        public void OnEnter()
        {
            ScreensManager.OpenScreen<BattleHUD, BattleHUDContext>(new BattleHUDContext());
            
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<LevelPassedEvent>(LevelPassedEventHandler)
            };
        }

        private void LevelPassedEventHandler(LevelPassedEvent eventData)
        {
            _stateMachine.Enter<WinState>();
        }

        public void OnExit()
        {
            _subscriptions?.Dispose();
            ScreensManager.CloseScreen<BattleHUD>();
        }
    }
}
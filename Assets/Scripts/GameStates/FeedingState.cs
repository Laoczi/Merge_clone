using Events;
using IngameStateMachine;
using Screens.MergeHUD;
using SimpleEventBus.Disposables;

namespace GameStates
{
    public class FeedingState : IState
    {
        private StateMachine _stateMachine;
        private CompositeDisposable _subscriptions;

        public void Initialize(StateMachine stateMachine)
        {
            _stateMachine = stateMachine;
        }
        
        public void OnEnter()
        {
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<BattleStartEvent>(BattleStartEventHandler)
            };
        }

        private void BattleStartEventHandler(BattleStartEvent eventData)
        {
            _stateMachine.Enter<BattleState>();
        }

        public void OnExit()
        {
            _subscriptions?.Dispose();
            ScreensManager.CloseScreen<MergeHUD>();
        }
    }
}
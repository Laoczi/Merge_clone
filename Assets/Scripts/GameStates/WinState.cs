using IngameStateMachine;
using Screens.WinHUD;

namespace GameStates
{
    public class WinState : IState
    {
        private StateMachine _stateMachine;

        public void Initialize(StateMachine stateMachine)
        {
            _stateMachine = stateMachine;
        }
        
        public void OnEnter()
        {
            ScreensManager.OpenScreen<WinHUD, WinHUDContext>(new WinHUDContext());
        }

        public void OnExit()
        {
            
        }
    }
}
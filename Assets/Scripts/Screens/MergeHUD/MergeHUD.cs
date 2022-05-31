using DefaultNamespace;
using Events;
using GameServices;
using JetBrains.Annotations;
using MicroRx.Core;
using ScreenManager.Core;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UniRx;

namespace Screens.MergeHUD
{
    public class MergeHUD : UIScreen<MergeHUDContext>
    {
        private const string START_VALUE = "0";
            
        [SerializeField] 
        private Button _startButton;

        [SerializeField] 
        private Button _addFoodButton;

        [SerializeField] 
        private Button _addMonsterButton;

        [SerializeField] 
        private FoodButtonPresenter _foodButtonPresenter;

        [SerializeField] 
        private UserMoneyPresenter _userMoneyPresenter;

        [SerializeField] 
        private Slider _powerProgress;

        [SerializeField] 
        private TMP_Text _startValueLabel;

        [SerializeField] 
        private TMP_Text _finishValueLabel;

        [SerializeField] 
        private float _sliderScalingTime = 0.5f;

        private Coroutine _addPowerCoroutine;
        private IPlayerViewSettingsProvider _playerViewSettings;
        private UserProfile _userProfile;
        private float _currentLevelPower;
        
        public override void Initialize(MergeHUDContext context)
        {
            _foodButtonPresenter.Initialize(context.MoneyService);
            _userMoneyPresenter.Initialize(context.MoneyService);
            _playerViewSettings = context.PlayerViewSettings;
            _userProfile = context.UserProfile;
            
            context.PlayerViewService.SetCalculatingTime(_sliderScalingTime);

            _userProfile.PowerLevel.Subscribe(ChangeStartAndFinishValues).AddTo(this);
            context.PlayerViewService.CurrentLevelPower.Subscribe(ChangeSliderValue).AddTo(this);
        }

        private void ChangeSliderValue(float value)
        {
            var level = _userProfile.PowerLevel.Value;
            float valueCapacity = _playerViewSettings.GetPowerCapacity(level);
            _powerProgress.value = value / valueCapacity;
        }

        private void ChangeStartAndFinishValues(int previousLevel, int nextLevel)
        {
            if (previousLevel == 0)
            {
                _startValueLabel.text = START_VALUE;
                _finishValueLabel.text = _playerViewSettings.GetMaxPower(nextLevel).ToString();
                return;
            }

            _startValueLabel.text = _playerViewSettings.GetMaxPower(previousLevel).ToString();
            _finishValueLabel.text = _playerViewSettings.GetMaxPower(nextLevel).ToString();
        }

        [UsedImplicitly]
        public void PlayButtonPressed()
        {
            EventStreams.UserInterface.Publish(new PlayButtonPressedEvent());

            _startButton.gameObject.SetActive(false);
            _addFoodButton.gameObject.SetActive(false);
            _addMonsterButton.gameObject.SetActive(false);
            
            Cursor.SetCursor(null, Vector2.zero, CursorMode.Auto);
        }

        [UsedImplicitly]
        public void NewFoodButtonPressed()
        {
            EventStreams.UserInterface.Publish(new NewFoodButtonPressedEvent());
        }
        
        [UsedImplicitly]
        public void NewMonsterButtonPressed()
        {
            EventStreams.UserInterface.Publish(new NewMonsterButtonPressedEvent());
        }
    }
}
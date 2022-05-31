using GameServices;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

namespace Screens.MergeHUD
{
    public class FoodButtonPresenter : MonoBehaviour
    {
        [SerializeField] 
        private Button _newFoodButton;

        [SerializeField] 
        private int _foodCost = 100;
        
        private IMoneyService _moneyService;

        public void Initialize(IMoneyService moneyService)
        {
            _moneyService = moneyService;
            
            _newFoodButton
                .OnClickAsObservable()
                .Subscribe(_ => _moneyService.Pay(_foodCost))
                .AddTo(this);

            _moneyService.Money.Select(_ => _moneyService.HasEnoughMoney(_foodCost))
                .SubscribeToInteractable(_newFoodButton).AddTo(this);
        }
    }
}
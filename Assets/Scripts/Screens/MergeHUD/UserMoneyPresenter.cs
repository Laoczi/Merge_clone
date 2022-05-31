using GameServices;
using TMPro;
using UniRx;
using UnityEngine;

namespace Screens.MergeHUD
{
    /// <summary>
    /// Класс, отвечающий за отображение на UI денег пользователя
    /// </summary>
    public class UserMoneyPresenter : MonoBehaviour
    {
        [SerializeField]
        private TextMeshProUGUI _userMoneyLabel;

        public void Initialize(IMoneyService moneyService)
        {
            moneyService.Money
                .Subscribe(_ => _userMoneyLabel.text = moneyService.Money.Value.ToString())
                .AddTo(this);
        }
    }
}
using UniRx;

namespace GameServices
{
    /// <summary>
    /// Класс, отвечающий за деньги пользователя
    /// </summary>
    public class MoneyService : IMoneyService
    {
        public IReadOnlyReactiveProperty<int> Money => _userProfile.Money;

        private UserProfile _userProfile;

        public MoneyService(UserProfile userProfile)
        {
            _userProfile = userProfile;
        }

        public void Pay(int amount)
        {
            if (HasEnoughMoney(amount))
            {
                _userProfile.Money.Value -= amount;
            }
        }
    
        public void Receive(int money)
        {
            _userProfile.Money.Value += money;
        }

        public bool HasEnoughMoney(int amount)
        {
            return _userProfile.Money.Value >= amount;
        }
    }
}
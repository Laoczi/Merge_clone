using UniRx;
using User;

namespace GameServices
{
    /// <summary>
    /// Класс, отвечающий за деньги пользователя
    /// </summary>
    public class MoneyService : IMoneyService
    {
        private readonly IMoneyProvider _moneyProvider;
        public IReadOnlyReactiveProperty<int> Money => _moneyProvider.Money;


        public MoneyService(IMoneyProvider moneyProvider)
        {
            _moneyProvider = moneyProvider;
        }

        public void Pay(int amount)
        {
            if (HasEnoughMoney(amount))
            {
                _moneyProvider.Money.Value -= amount;
            }
        }
    
        public void Receive(int money)
        {
            _moneyProvider.Money.Value += money;
        }

        public bool HasEnoughMoney(int amount)
        {
            return _moneyProvider.Money.Value >= amount;
        }
    }
}
using UniRx;

namespace GameServices
{
    public interface IMoneyService
    {
        IReadOnlyReactiveProperty<int> Money { get; }
        void Pay(int amount);
        void Receive(int money);
        bool HasEnoughMoney(int amount);
    }
}
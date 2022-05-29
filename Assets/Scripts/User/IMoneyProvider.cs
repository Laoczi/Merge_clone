using UniRx;

namespace User
{
    public interface IMoneyProvider
    {
        ReactiveProperty<int> Money { get; }
    }
}
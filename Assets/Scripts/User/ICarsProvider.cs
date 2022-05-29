using UniRx;

namespace User
{
    public interface ICarsProvider
    {
        ReactiveCollection<string> Cars { get; }
        ReactiveProperty<string> CurrentCar { get; }
    }
}
using UniRx;

namespace User
{
    public interface ILevelProvider
    {
        ReactiveProperty<int> Level { get; }
        ReactiveProperty<float> LevelProgress { get; }
    }
}
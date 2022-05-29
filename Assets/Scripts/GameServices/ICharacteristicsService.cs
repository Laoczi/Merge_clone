using CharacteristicsSettings;
using UniRx;

namespace GameServices
{
    public interface ICharacteristicsService
    {
        IReadOnlyReactiveProperty<int> GetCharacteristicLevel(CharacteristicType type);
        void UpgradeCharacteristic(CharacteristicType type);
    }
}
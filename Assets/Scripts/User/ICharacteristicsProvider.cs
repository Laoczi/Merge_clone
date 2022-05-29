using System.Collections.Generic;
using CharacteristicsSettings;
using UniRx;

namespace User
{
    public interface ICharacteristicsProvider
    {
        Dictionary<CharacteristicType, ReactiveProperty<int>> CharacteristicsLevels { get; }
    }
}
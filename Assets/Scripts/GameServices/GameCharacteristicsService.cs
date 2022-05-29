using CharacteristicsSettings;
using GameServices;

namespace GameControllers
{
    /// <summary>
    /// Хранит и возвращает значения игровых характеристик
    /// </summary>
    public class GameCharacteristicsService
    {
        private readonly ICharacteristicsService _characteristicsService;
        private readonly ICharacteristicsSettingsProvider _characteristicsSettings;

        public GameCharacteristicsService(ICharacteristicsService characteristicsService,
            ICharacteristicsSettingsProvider characteristicsSettings)
        {
            _characteristicsService = characteristicsService;
            _characteristicsSettings = characteristicsSettings;
        }

        public float GetCharacteristicValue(CharacteristicType characteristicType)
        {
            var level = _characteristicsService.GetCharacteristicLevel(characteristicType);
            var value = _characteristicsSettings.GetValue(characteristicType, level.Value);
            return value;
        }
    }
}
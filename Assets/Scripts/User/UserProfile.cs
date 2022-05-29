using System.Collections.Generic;
using CharacteristicsSettings;
using UniRx;

namespace User
{
    /// <summary>
    /// Профиль игрока, хранит реактивные свойства Уровень, Уровни характеристик, Деньги
    /// </summary>
    public class UserProfile : ICharacteristicsProvider, IMoneyProvider, ILevelProvider
    {
        private const int INITIAL_CHARACTERISTIC_LEVEL = 1;
        private const int INITIAL_MONEY_VALUE = 3000;
        private const int INITIAL_LEVEL_ID = 1;

        public Dictionary<CharacteristicType, ReactiveProperty<int>> CharacteristicsLevels { get; }
        public ReactiveProperty<int> Money { get; }
        public ReactiveProperty<int> Level { get; }
        public ReactiveProperty<float> LevelProgress { get; }
        
        public UserProfile()
        {
            CharacteristicsLevels = new Dictionary<CharacteristicType, ReactiveProperty<int>>();

            var allCharacteristicTypes = CharacteristicsTypes.GetAll();
            foreach (var characteristicType in allCharacteristicTypes)
            {
                CharacteristicsLevels[characteristicType] = new ReactiveProperty<int>(INITIAL_CHARACTERISTIC_LEVEL);
            }

            Money = new ReactiveProperty<int>(INITIAL_MONEY_VALUE);
            Level = new ReactiveProperty<int>(INITIAL_LEVEL_ID);
            LevelProgress = new ReactiveProperty<float>(0);
        }
        
        public UserProfile(Dictionary<CharacteristicType, int> characteristicsLevels, int money, int userProgress)
        {
            CharacteristicsLevels = new Dictionary<CharacteristicType, ReactiveProperty<int>>();
            
            foreach (var characteristic in characteristicsLevels)
            {
                CharacteristicsLevels[characteristic.Key] = new ReactiveProperty<int>(characteristic.Value);
            }
            
            Money = new ReactiveProperty<int>(money);
            Level = new ReactiveProperty<int>(userProgress);
            LevelProgress = new ReactiveProperty<float>(0);
        }
    }
}
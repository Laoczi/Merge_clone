using System;
using System.Collections.Generic;
using CharacteristicsSettings;
using UniRx;
using User;

namespace UserProgress
{
    /// <summary>
    /// Следит за прогрессом пользователя и сохраняет его через методы PrefsManager
    /// </summary>
    public class ProfileStorage : IDisposable
    {
        private CompositeDisposable _subscriptions;
        
        public ProfileStorage()
        {
        }

        public UserProfile GetLastUserProfile()
        {
            var characteristics = LoadCharacteristics();
            var userMoney = PrefsManager.LoadMoney();
            var userProgress = PrefsManager.LoadPlayerProgress();
            var currentCar = PrefsManager.LoadCar();

            var userProfile = new UserProfile(characteristics, userMoney, userProgress);

            return userProfile;
        }

        public void StartTrackingChanges(UserProfile userProfile)
        {
            _subscriptions?.Dispose();

            _subscriptions = new CompositeDisposable();

            foreach (var characteristic in userProfile.CharacteristicsLevels)
            {
                var upgradeLevelSubscription = characteristic.Value
                    .Subscribe(currentLevel => PrefsManager.SaveCharacteristicLevelProgress(characteristic.Key, currentLevel));

                _subscriptions.Add(upgradeLevelSubscription);
            }

            var moneySubscription = userProfile.Money
                .Subscribe(PrefsManager.SaveMoneyProgress);
            _subscriptions.Add(moneySubscription);

            var playerProgressSubscription = userProfile.Level
                .Subscribe(PrefsManager.SavePlayerProgress);
            _subscriptions.Add(playerProgressSubscription);
        }

        public bool HasProgress()
        {
            return PrefsManager.HasUserProfile();
        }

        private Dictionary<CharacteristicType, int> LoadCharacteristics()
        {
            var characteristics = new Dictionary<CharacteristicType, int>();

            var allCharacteristicTypes = CharacteristicsTypes.GetAll();
            foreach (var characteristicType in allCharacteristicTypes)
            {
                var characteristicLevel = PrefsManager.LoadCharacteristicLevel(characteristicType);
                characteristics[characteristicType] = characteristicLevel;
            }

            return characteristics;
        }
        
        public void Dispose()
        {
            _subscriptions?.Dispose();
        }
    }
}
using CharacteristicsSettings;
using UnityEngine;

namespace UserProgress
{
    public class PrefsManager
    {
        private const string MONEY_KEY = "Money";
        private const string LEVEL_KEY = "Level";
        private const string CAR_KEY = "Car";
        private const string CAR_BOUGHT_KEY = "CarToBougth_{0}";

        
        public static bool HasUserProfile()
        {
            return PlayerPrefs.HasKey(MONEY_KEY);
        }

        public static int LoadCharacteristicLevel(CharacteristicType type)
        {
            return PlayerPrefs.GetInt(type.ToString());
        }

        public static void SaveCharacteristicLevelProgress(CharacteristicType characteristic, int level)
        {
            PlayerPrefs.SetInt(characteristic.ToString(), level);
            PlayerPrefs.Save();
        }

        public static int LoadMoney()
        {
            return PlayerPrefs.GetInt(MONEY_KEY);
        }

        public static void SaveMoneyProgress(int level)
        {
            PlayerPrefs.SetInt(MONEY_KEY, level);
            PlayerPrefs.Save();
        }

        public static int LoadPlayerProgress()
        {
            return PlayerPrefs.GetInt(LEVEL_KEY);
        }
        
        public static void SavePlayerProgress(int id)
        {
            PlayerPrefs.SetInt(LEVEL_KEY, id);
            PlayerPrefs.Save();
        }
        
        public static bool HasCarBought(string id)
        {
            return PlayerPrefs.GetInt(string.Format(CAR_BOUGHT_KEY, id)) == 1;
        }

        public static string LoadCar()
        {
            return PlayerPrefs.GetString(CAR_KEY);
        }

        public static void SaveCurrentCar(string id)
        {
            PlayerPrefs.SetString(CAR_KEY, id);
            PlayerPrefs.Save();
        }

        public static void SaveNewBoughtCar(string id)
        {
            var key = string.Format(CAR_BOUGHT_KEY, id);
            PlayerPrefs.SetInt(key, 1);
            PlayerPrefs.Save();
        }
    }
}
namespace CharacteristicsSettings
{
    public interface ICharacteristicsSettingsProvider
    {
        float GetValue(CharacteristicType type, int level);
        int GetUpgradeCost(CharacteristicType type, int level);
        bool IsUpgradedToMaxLevel(CharacteristicType type, int level);
    }
}
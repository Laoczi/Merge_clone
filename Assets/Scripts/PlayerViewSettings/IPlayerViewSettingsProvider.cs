namespace DefaultNamespace
{
    public interface IPlayerViewSettingsProvider
    {
        Player.Player GetPrefab(int level);
        int GetLevel(int value);
        int GetPowerCapacity(int level);
        int GetMaxPower(int level);
    }
}
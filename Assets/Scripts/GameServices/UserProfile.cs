using UniRx;

namespace GameServices
{
    public class UserProfile
    {
        private const int INITIAL_MONEY_VALUE = 10000;
        private const int INITIAL_PLAYER_LEVEL = 1;
        private const int INITIAL_PLAYER_POINTS = 0;
        
        public ReactiveProperty<int> Money { get; }
        public ReactiveProperty<int> PowerLevel { get; }
        public ReactiveProperty<int> PowerValue { get; }

        public UserProfile()
        {
            Money = new ReactiveProperty<int>(INITIAL_MONEY_VALUE);
            PowerLevel = new ReactiveProperty<int>(INITIAL_PLAYER_LEVEL);
            PowerValue = new ReactiveProperty<int>(INITIAL_PLAYER_POINTS);
        }
    }
}
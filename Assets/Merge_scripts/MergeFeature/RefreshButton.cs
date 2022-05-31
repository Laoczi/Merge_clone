using MergeFeature.Events;
using UnityEngine;

namespace MergeFeature
{
    public class RefreshButton : MonoBehaviour
    {
        public void Refresh()
        {
            EventStreams.UserInterface.Publish(new RefreshButtonClickedEvent());
        }
    }
}
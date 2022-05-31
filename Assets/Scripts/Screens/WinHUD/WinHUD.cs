using System.Collections;
using ScreenManager.Core;
using UnityEngine;

namespace Screens.WinHUD
{
    public class WinHUD : UIScreen<WinHUDContext>
    {
        [SerializeField]
        private float _timeToShow = 1f;
        [SerializeField]
        private Canvas _canvas;
    
        public override void Initialize(WinHUDContext context)
        {
            StartCoroutine(OpenScreen());
        }
        
        private IEnumerator OpenScreen()
        {
            _canvas.gameObject.SetActive(false);
            yield return new WaitForSeconds(_timeToShow);
            _canvas.gameObject.SetActive(true);
        }
    }
}
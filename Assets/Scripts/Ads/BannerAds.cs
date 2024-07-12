using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

sealed class BannerAds : MonoBehaviour
{
    [SerializeField]
    private string _androidAdUnityID;

    private string _adUnityID;
    private void Awake()
    {
#if UNITY_ANDROID
        _adUnityID = _androidAdUnityID;
#endif

        Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
    }

    public void LoadBannerAd()
    {
        BannerLoadOptions options = new BannerLoadOptions
        {
            loadCallback = BannerLoaded,
            errorCallback = BannerLoadedError
        };

        Advertisement.Banner.Load(_adUnityID, options);
    }

    public void ShowBannerAd()
    {
        BannerOptions options = new BannerOptions
        {
            showCallback = BannerShown,
            clickCallback = BannerClicked,
            hideCallback = BannerHidden
        };

        Advertisement.Banner.Show(_adUnityID, options);
    }

    public void HideBannerAd()
    {
        Advertisement.Banner.Hide();
    }

    #region ShowCallBack
    private void BannerHidden()
    {

    }

    private void BannerClicked()
    {

    }

    private void BannerShown()
    {

    }
    #endregion

    #region LoadCallBack
    private void BannerLoadedError(string message)
    {
        
    }

    private void BannerLoaded()
    {
        Debug.Log("Banner Ad Loaded");
    }
    #endregion
}

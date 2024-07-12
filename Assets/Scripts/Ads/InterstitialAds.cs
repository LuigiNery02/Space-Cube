using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

sealed class InterstitialAds : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField]
    private string _androidAdUnityID;

    private string _adUnityID;
    private void Awake()
    {
#if UNITY_ANDROID
        _adUnityID = _androidAdUnityID;
#endif
    }

    public void LoadInterstitialAd()
    {
        Advertisement.Load(_adUnityID, this);
    }

    public void ShowInterstitialAd()
    {
        Advertisement.Show(_adUnityID, this);
        LoadInterstitialAd();
    }

    #region LoadCallBacks
    public void OnUnityAdsAdLoaded(string placementId)
    {
        Debug.Log("Interstitial Ad Loaded");
    }

    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {

    }
    #endregion

    #region ShowCallBacks
    public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
    {

    }

    public void OnUnityAdsShowStart(string placementId)
    {

    }

    public void OnUnityAdsShowClick(string placementId)
    {

    }

    public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
    {
        Debug.Log("Interstitial Ad Complete");
    }
    #endregion
}
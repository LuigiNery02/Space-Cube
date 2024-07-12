using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.Events;

sealed class RewardedAds : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField]
    private string _androidAdUnityID;

    private string _adUnityID;

    private string _name;
    private void Awake()
    {
#if UNITY_ANDROID
        _adUnityID = _androidAdUnityID;
#endif
    }

    public void LoadRewardedAd()
    {
        Advertisement.Load(_adUnityID, this);
    }

    public void ShowRewardedAd()
    {
        Advertisement.Show(_adUnityID, this);
        LoadRewardedAd();
    }

    public void ChangeName(string cubeName)
    {
        _name = cubeName;
    }

    #region LoadCallBacks
    public void OnUnityAdsAdLoaded(string placementId)
    {
        Debug.Log("Rewarded Ad Loaded");
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
        if(placementId == _adUnityID && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
        {
            Debug.Log("Ads Fully Watched...");
            GameMaster.Instance.isRewarded = true;
            GameMaster.Instance.Reward(_name);
        }
    }
    #endregion
}

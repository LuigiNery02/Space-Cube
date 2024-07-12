using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class AdsRewardedButton : MonoBehaviour
{
    public void RewardedButton()
    {
        AdsManager.Instance.rewardedAds.ShowRewardedAd();
    }
}

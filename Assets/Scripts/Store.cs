using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

sealed class Store : MonoBehaviour
{
    private CoinManager _coinManager;
    private ItemShop _itemShop;

    public List<ItemShop> soundItems = new List<ItemShop>();
    public List<ItemShop> deathZoneItems = new List<ItemShop>();
    public List<ItemShop> wallItems = new List<ItemShop>();

    public GameObject storeScreen;

    public AudioSource boughtSound;
    public AudioSource errorSound;


    private void Awake()
    {
        _coinManager = GameObject.Find("CoinManager").GetComponent<CoinManager>();
    }

    private void Start()
    {
        bool allSoundItemsHaveZeroStateValue = soundItems.All(item => item._itemStatusValue == 0);
        bool alldeathZoneItemsHaveZeroStateValue = deathZoneItems.All(item => item._itemStatusValue == 0);
        bool allwallItemsHaveZeroStateValue = wallItems.All(item => item._itemStatusValue == 0);

        if (allSoundItemsHaveZeroStateValue)
        {
            UnequipAllSoundItems();

            soundItems[0]._itemStatusValue = 2;

            soundItems[0].CheckButtons();
        }

        if (alldeathZoneItemsHaveZeroStateValue)
        {
            UnequipAllDeathZoneItems();

            deathZoneItems[0]._itemStatusValue = 2;

            deathZoneItems[0].CheckButtons();
        }

        if (allwallItemsHaveZeroStateValue)
        {
            UnequipAllWallItems();

            wallItems[0]._itemStatusValue = 2;

            wallItems[0].CheckButtons();
        }
    }

    public void TryToBuy(int cost)
    {
        if(_coinManager.currentCoins >= cost)
        {
            _coinManager.LoseCoins(cost);
            _itemShop.GetComponent<ItemShop>().Bought();
            boughtSound.Play();
        }
        else
        {
            errorSound.Play();
        }
    }

    public void GetItem(ItemShop itemShop)
    {
        _itemShop = itemShop;
    }

    public void EquipSoundItem(ItemShop itemToEquip)
    {
        UnequipAllSoundItems();

        itemToEquip._itemStatusValue = 2;

        StartCoroutine(UpdateStoreScreen());
    }

    public void EquipDeathZoneItem(ItemShop itemToEquip)
    {
        UnequipAllDeathZoneItems();

        itemToEquip._itemStatusValue = 2;

        StartCoroutine(UpdateStoreScreen());
    }

    public void EquipWallItem(ItemShop itemToEquip)
    {
        UnequipAllWallItems();

        itemToEquip._itemStatusValue = 2;

        StartCoroutine(UpdateStoreScreen());
    }

    private void UnequipAllSoundItems()
    {
        foreach (ItemShop item in soundItems)
        {
            if (item._itemStatusValue == 2)
            {
                item._itemStatusValue = 1;
                item.CheckButtons();
            }
        }
    }

    private void UnequipAllDeathZoneItems()
    {
        foreach (ItemShop item in deathZoneItems)
        {
            if (item._itemStatusValue == 2)
            {
                item._itemStatusValue = 1;
                item.CheckButtons();
            }
        }
    }

    private void UnequipAllWallItems()
    {
        foreach (ItemShop item in wallItems)
        {
            if (item._itemStatusValue == 2)
            {
                item._itemStatusValue = 1;
                item.CheckButtons();
            }
        }
    }

    IEnumerator UpdateStoreScreen()
    {
        storeScreen.SetActive(false);
        yield return new WaitForSeconds(0.001f);
        storeScreen.SetActive(true);
    }
}

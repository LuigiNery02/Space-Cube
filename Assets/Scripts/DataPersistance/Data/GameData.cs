using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData
{
    public int higherScore;
    public int currentDay;
    public long lastClaimedTime;
    public int currentCoins;
    public SerializableDictionary<string, int> itemsBought;
    public int musicID;
    public int materialID;
    public int wallMaterialID;
    public bool hasXCubes;
    public bool hasExplosiveCubes;
    public GameData()
    {
        higherScore = 0;
        currentCoins = 0;
        currentDay = 1;
        lastClaimedTime = 0;
        itemsBought = new SerializableDictionary<string, int>();
        musicID = 0;
        wallMaterialID = 0;
        materialID = 0;
        hasXCubes = false;
        hasExplosiveCubes = false;
    }
}

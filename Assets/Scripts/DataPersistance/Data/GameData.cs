using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData
{
    public int higherScore; //player's highest score variable
    public GameData()
    {
        higherScore = 0; //original value of the variable
    }
}

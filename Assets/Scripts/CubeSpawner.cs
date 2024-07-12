using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

sealed class CubeSpawner : MonoBehaviour
{
    [Header("Cubes")]
    [SerializeField]
    private GameObject _playerCube; //main cube
    [SerializeField]
    private GameObject _cube; //commom cube
    [SerializeField]
    private GameObject _xCube; //x cube
    [SerializeField]
    private GameObject _explosiveCube; //explosive cube

    [Header("Score")]
    [SerializeField]
    private Score _score; //score number


    [Header("TouchSlider")]
    [SerializeField]
    private GameObject _touchSlider; //slider to aim the cube

    [Header("DeathZone")]
    [SerializeField]
    private DeathZone _deathZone; //deathzone 

    private PlayerCube _currentPlayerCube;

    [HideInInspector]
    public bool canInstantiate; //variable to check if can instantiate a cube
    [HideInInspector]
    public bool canInstantiatePlayerCube; //variable to check if can instantiate the player cube

    private void Start()
    {
        canInstantiatePlayerCube = true;
    }

    public void SpawnCube(Vector3 position, int cubeNumber) //spawn a cube with double value
    {
        if (canInstantiate)
        {
            canInstantiate = false;
            if (ObjectPool.cubes.Count > 0) //if has cubes in the pool
            {
                //respawn a cube by the pool
                ObjectPool.cubes[0].SetActive(true);
                ObjectPool.cubes[0].GetComponent<Cube>().Respawn(position, Quaternion.Euler(0, 0, 0), cubeNumber * 2);
                float pushForce = 2.5f;
                _cube.GetComponent<Rigidbody>().AddForce(new Vector3(0, .3f, 1f) * pushForce, ForceMode.Impulse);
                float randomValue = Random.Range(-20f, 20f);
                Vector3 randomDirection = Vector3.one * randomValue;
                _cube.GetComponent<Rigidbody>().AddTorque(randomDirection);
            }
            else
            {
                //spawn a cube
                _cube.GetComponent<Cube>().currentNumber = cubeNumber * 2;
                Instantiate(_cube, position, Quaternion.identity);
                float pushForce = 2.5f;
                _cube.GetComponent<Rigidbody>().AddForce(new Vector3(0, .3f, 1f) * pushForce, ForceMode.Impulse);
                float randomValue = Random.Range(-20f, 20f);
                Vector3 randomDirection = Vector3.one * randomValue;
                _cube.GetComponent<Rigidbody>().AddTorque(randomDirection);
            }
            _score.GetComponent<Score>().NewScore(cubeNumber * 2); //adds the value to the score
        }
    }

    public void ScoreByExplosiveCube(int cubeNumber)
    {
        _score.GetComponent<Score>().NewScore(cubeNumber * 2); //adds the value to the score
    }

    public void SpawnPlayerCube(Vector3 position) //spawn the main cube
    {
        _deathZone.canDeath = false;
        StartCoroutine(WaitToSpawnPlayerCube(position));
    }

    IEnumerator WaitToSpawnPlayerCube(Vector3 position) //wait a certain amount of time to reposition the cube
    {
        if (canInstantiatePlayerCube)
        {
            canInstantiatePlayerCube = false;
            _touchSlider.SetActive(false);
            yield return new WaitForSeconds(0.5f);
            _deathZone.canDeath = true;
            _touchSlider.SetActive(true);
            if (ObjectPool.playerCubes.Count > 0) //if has cubes in the pool
            {
                //reposition the cube
                ObjectPool.playerCubes[0].GetComponent<PlayerCube>().rb.velocity = new Vector3(0, 0, 0);
                ObjectPool.playerCubes[0].SetActive(true);
                ObjectPool.playerCubes[0].GetComponent<PlayerCube>().EssentialFunctions();
                ObjectPool.playerCubes[0].GetComponent<PlayerCube>().Delegates();
                ObjectPool.playerCubes[0].GetComponent<PlayerCube>().Respawn(position, Quaternion.Euler(0, 0, 0), 0);
            }
            else
            {
                //instantiate and reposition the cube
                Instantiate(_playerCube, position, Quaternion.Euler(0, 0, 0));
            }
            canInstantiatePlayerCube = true;
        }
    }

    public void SpawnXCube(Vector3 position) //spawn the x cube
    {
        _deathZone.canDeath = false;
        StartCoroutine(WaitToSpawnXCube(position));
    }

    IEnumerator WaitToSpawnXCube(Vector3 position) //wait a certain amount of time to reposition the cube
    {
        if (canInstantiatePlayerCube)
        {
            canInstantiatePlayerCube = false;
            _touchSlider.SetActive(false);
            yield return new WaitForSeconds(0.5f);
            _deathZone.canDeath = true;
            _touchSlider.SetActive(true);
            if (ObjectPool.xCubes.Count > 0) //if has cubes in the pool
            {
                //reposition the cube
                ObjectPool.xCubes[0].GetComponent<XCube>().rb.velocity = new Vector3(0, 0, 0);
                ObjectPool.xCubes[0].SetActive(true);
                ObjectPool.xCubes[0].GetComponent<XCube>().EssentialFunctions();
                ObjectPool.xCubes[0].GetComponent<XCube>().Delegates();
                ObjectPool.xCubes[0].GetComponent<XCube>().Respawn(position, Quaternion.Euler(0, 0, 0), 0);
            }
            else
            {
                //instantiate and reposition the cube
                Instantiate(_xCube, position, Quaternion.Euler(0, 0, 0));
            }
            canInstantiatePlayerCube = true;
        }
    }

    public void SpawnExplosiveCube(Vector3 position) //spawn the explosive cube
    {
        _deathZone.canDeath = false;
        StartCoroutine(WaitToSpawnExplosiveCube(position));
    }

    IEnumerator WaitToSpawnExplosiveCube(Vector3 position) //wait a certain amount of time to reposition the cube
    {
        if (canInstantiatePlayerCube)
        {
            canInstantiatePlayerCube = false;
            _touchSlider.SetActive(false);
            yield return new WaitForSeconds(0.5f);
            _deathZone.canDeath = true;
            _touchSlider.SetActive(true);
            if (ObjectPool.explosiveCubes.Count > 0) //if has cubes in the pool
            {
                //reposition the cube
                ObjectPool.explosiveCubes[0].GetComponent<ExplosiveCube>().rb.velocity = new Vector3(0, 0, 0);
                ObjectPool.explosiveCubes[0].SetActive(true);
                ObjectPool.explosiveCubes[0].GetComponent<ExplosiveCube>().EssentialFunctions();
                ObjectPool.explosiveCubes[0].GetComponent<ExplosiveCube>().Delegates();
                ObjectPool.explosiveCubes[0].GetComponent<ExplosiveCube>().Respawn(position, Quaternion.Euler(0, 0, 0), 0);
            }
            else
            {
                //instantiate and reposition the cube
                Instantiate(_explosiveCube, position, Quaternion.Euler(0, 0, 0));
            }
            canInstantiatePlayerCube = true;
        }
    }

    public void SwitchCubes(string cubeType)
    {
        PlayerCube[] currentPlayerCubeClone = FindObjectsOfType<PlayerCube>();
        foreach (PlayerCube clone in currentPlayerCubeClone)
        {
            PlayerCube current = clone.GetComponent<PlayerCube>();
            if (current != null && current.isPlayerCube)
            {
                _currentPlayerCube = current;
                break;
            }
        }
        _currentPlayerCube.transform.position = new Vector3(-100, -100, -100);
        ObjectPool.playerCubes.Add(_currentPlayerCube.gameObject);
        _currentPlayerCube.gameObject.SetActive(false);

        if (cubeType == "XCube")
        {
            SpawnXCube(new Vector3(1.539745e-07f, 0.499999f, -5.16f));
        }
        else if (cubeType == "ExplosiveCube")
        {
            SpawnExplosiveCube(new Vector3(1.539745e-07f, 0.499999f, -5.16f));
        }
    }
}

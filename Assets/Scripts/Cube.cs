using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Cube : MonoBehaviour
{
    [Header("Number")]
    public TextMeshPro[] textNumber; //tmp text cube number
    [HideInInspector]
    public int currentNumber; //current cube number
    [SerializeField]
    private int[] _cubeNumbers; //numbers that the cube can have
    private int _randomNumber; //variable that the randomizes the cube number

    [Header("CubeType")]
    public bool isPlayerCube; //variable that check if is the main cube
    public bool isExplosiveCube; //variable that check if is the explosive cube
    public bool isXCube; //variable that check if is the x cube

    [Header("Color")]
    [SerializeField]
    private Color[] _cubeColor; //cube color
    [HideInInspector]
    public MeshRenderer _cubeMeshRenderer; //cube mesh

    private int _random; //variable that random a number
    private int _positive; //variable that check which cuber won't be destroyed if is positive

    private CubeSpawner _cubeSpawner; //CubeSpawner

    private SFX _sfx; //SFX

    private void Start()
    {
        StartFunciotns();
    }

    public void StartFunciotns() //cube initial functions
    {
        _cubeMeshRenderer = GetComponent<MeshRenderer>(); //get the cube mesh

        if (currentNumber == 0 && !isXCube && !isExplosiveCube) //if the cube doesn't have a defined number
        {
            RandomNumber(); //random the cube number
        }
        else if (isXCube)
        {
            currentNumber = -2;
        }
        else if (isExplosiveCube)
        {
            currentNumber = -4;
        }

        if (!isXCube && !isExplosiveCube)
        {
            switch (currentNumber) //change the cube color according its number
            {
                case 2:
                    _cubeMeshRenderer.material.color = _cubeColor[0];
                    break;
                case 4:
                    _cubeMeshRenderer.material.color = _cubeColor[1];
                    break;
                case 8:
                    _cubeMeshRenderer.material.color = _cubeColor[2];
                    break;
                case 16:
                    _cubeMeshRenderer.material.color = _cubeColor[3];
                    break;
                case 32:
                    _cubeMeshRenderer.material.color = _cubeColor[4];
                    break;
                case 64:
                    _cubeMeshRenderer.material.color = _cubeColor[5];
                    break;
                case 128:
                    _cubeMeshRenderer.material.color = _cubeColor[6];
                    break;
                case 256:
                    _cubeMeshRenderer.material.color = _cubeColor[7];
                    break;
                case 512:
                    _cubeMeshRenderer.material.color = _cubeColor[8];
                    break;
                default:
                    _cubeMeshRenderer.material.color = _cubeColor[9];
                    break;
            }

            //display the cube number
            for (int i = 0; i < 6; i++)
            {
                textNumber[i].text = currentNumber.ToString();
            }
        }
        else
        {
            _cubeMeshRenderer.material.color = _cubeColor[0];

            if (!isExplosiveCube)
            {
                //display the cube number
                for (int i = 0; i < 6; i++)
                {
                    textNumber[i].text = "X".ToString();
                }
            }
        }

        _cubeSpawner = GameObject.Find("CubeSpawner").GetComponent<CubeSpawner>(); //find the CubeSpawner in the scene
        _sfx = GameObject.Find("SFX").GetComponent<SFX>(); //find the SFX in the scene
    }

    public void RandomNumber() //random the cube number
    {
        _randomNumber = Random.Range(0, 5);

        switch (_randomNumber)
        {
            case 0:
                currentNumber = _cubeNumbers[0];
                break;
            case 1:
                currentNumber = _cubeNumbers[1];
                break;
            case 2:
                currentNumber = _cubeNumbers[2];
                break;
            case 3:
                currentNumber = _cubeNumbers[3];
                break;
            case 4:
                currentNumber = _cubeNumbers[4];
                break;
        }
    }

    public void PositiveOrNegative() //random if the cube will be positive
    {
        _random = Random.Range(0, 2);

        switch (_random)
        {
            case 0:
                _positive = 0;
                break;
            case 1:
                _positive = 1;
                break;
        }
    }

    private void OnCollisionEnter(Collision collision) //cube collision
    {
        if(collision.gameObject.GetComponent<Cube>() != null) //if collided with another cube
        {
            Cube cube = collision.gameObject.GetComponent<Cube>();
            if (cube.currentNumber == this.currentNumber) //if both cubes have the same number
            {
                returnPoint:
                if(this._positive > cube._positive) //check which cube is positive
                {
                    //adds one of two cubes to the pool
                    Vector3 contactPoint = collision.contacts[0].point;
                    if (cube.GetComponent<ExplosiveCube>())
                    {
                        ObjectPool.explosiveCubes.Add(cube.gameObject);
                    }
                    else if (cube.GetComponent<XCube>())
                    {
                        ObjectPool.xCubes.Add(cube.gameObject);
                    }
                    else if(cube.GetComponent<PlayerCube>() && cube.GetComponent<ExplosiveCube>() == null && cube.GetComponent<XCube>() == null)
                    {
                        ObjectPool.playerCubes.Add(cube.gameObject);
                    }
                    else
                    {
                        ObjectPool.cubes.Add(cube.gameObject);
                    }
                    cube.gameObject.SetActive(false);

                    CallCubeSpawner(contactPoint, currentNumber);

                    //launches the impact effect where collision occurred
                    Collider[] surroundedCubes = Physics.OverlapSphere(contactPoint, 2f);
                    float explosionForce = 400f;
                    float explosionRadius = 1.5f;

                    foreach (Collider coll in surroundedCubes)
                    {
                        if (coll.attachedRigidbody != null)
                            coll.attachedRigidbody.AddExplosionForce(explosionForce, contactPoint, explosionRadius);
                    }

                    //play the impact vfx
                    Explosion.Instance.PlayCubeExplosionFX(contactPoint);

                    //play the impact sfx
                    _sfx.score.Invoke();
                }
                //randomizes again as long as one of the two cubes is positive and the other is negative
                else if (this._positive == cube._positive)
                {
                    do
                    {
                        PositiveOrNegative();
                        goto returnPoint;
                    }
                    while (this._positive == cube._positive);
                }
            }
            else
            {
                if (gameObject.GetComponent<ExplosiveCube>() != null)
                {
                    gameObject.GetComponent<ExplosiveCube>().ActiveExplosion();

                    //play the impact sfx
                    _sfx.explosion.Invoke();
                }
                else if (gameObject.GetComponent<XCube>() != null)
                {
                    //adds one of two cubes to the pool
                    Vector3 contactPoint = collision.contacts[0].point;
                    if (cube.GetComponent<ExplosiveCube>() != null)
                    {
                        ObjectPool.explosiveCubes.Add(cube.gameObject);
                    }
                    else if (cube.GetComponent<XCube>() != null)
                    {
                        ObjectPool.xCubes.Add(cube.gameObject);
                    }
                    else if (cube.GetComponent<PlayerCube>() != null && cube.GetComponent<ExplosiveCube>() == null && cube.GetComponent<XCube>() == null)
                    {
                        ObjectPool.playerCubes.Add(cube.gameObject);
                    }
                    else
                    {
                        ObjectPool.cubes.Add(cube.gameObject);
                    }
                    cube.gameObject.SetActive(false);

                    CallCubeSpawner(contactPoint, cube.currentNumber);

                    //launches the impact effect where collision occurred
                    Collider[] surroundedCubes = Physics.OverlapSphere(contactPoint, 2f);
                    float explosionForce = 400f;
                    float explosionRadius = 1.5f;

                    foreach (Collider coll in surroundedCubes)
                    {
                        if (coll.attachedRigidbody != null)
                            coll.attachedRigidbody.AddExplosionForce(explosionForce, contactPoint, explosionRadius);
                    }

                    //play the impact vfx
                    Explosion.Instance.PlayCubeExplosionFX(contactPoint);

                    //play the impact sfx
                    _sfx.score.Invoke();
                }
            }
        }
    }

    public void CallCubeSpawner(Vector3 contact, int currentNumber) //spawn a new cube
    {
        _cubeSpawner.canInstantiate = true;
        _cubeSpawner.SpawnCube(contact + Vector3.up * 1.6f, currentNumber);
        if (gameObject.GetComponent<PlayerCube>() && gameObject.GetComponent<ExplosiveCube>() == null && gameObject.GetComponent<XCube>() == null)
        {
            ObjectPool.playerCubes.Add(gameObject);
        }
        else if (gameObject.GetComponent<ExplosiveCube>())
        {
            ObjectPool.explosiveCubes.Add(gameObject.gameObject);
        }
        else if (gameObject.GetComponent<XCube>())
        {
            ObjectPool.xCubes.Add(gameObject.gameObject);
        }
        else
        {
            ObjectPool.cubes.Add(gameObject);
        }
        gameObject.SetActive(false);
    }

    public void CallPlayerCubeSpawner() //spawn a new main cube
    {
        _cubeSpawner.SpawnPlayerCube(new Vector3(1.539745e-07f, 0.499999f, -5.16f));
    }

    public void Respawn(Vector3 position, Quaternion rotation, int number) //respawn a main cube by the pool
    {
        if (isPlayerCube && !isXCube && !isExplosiveCube)
        {
            ObjectPool.playerCubes.Remove(gameObject);
        }
        else if(isXCube && !isExplosiveCube)
        {
            ObjectPool.xCubes.Remove(gameObject);
        }
        else if(isExplosiveCube && !isXCube)
        {
            ObjectPool.explosiveCubes.Remove(gameObject);
        }
        else
        {
            ObjectPool.cubes.Remove(gameObject);
        }
        transform.position = position;
        transform.rotation = rotation;
        currentNumber = number;
        StartFunciotns();
    }

    public void CallSFXThrowCube() //play the throw sfx
    {
        _sfx.throwCube.Invoke();
    }
}

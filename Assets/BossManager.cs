using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossManager : MonoBehaviour
{
    public GameObject Dragons;
    public GameObject Cubes;
    public GameObject Floors;

    public void Update()
    {
        for (int i=0; i<Cubes.transform.childCount; i++)
        {
            if (Cubes.transform.GetChild(i).childCount == 0)
            {
                Destroy(Cubes.transform.GetChild(i).gameObject);
                Destroy(Dragons.transform.GetChild(i).gameObject);
                Destroy(Floors.transform.GetChild(i).gameObject);
            }
        }
    }
}

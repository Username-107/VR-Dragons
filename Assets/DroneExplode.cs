using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DroneExplode : MonoBehaviour
{

    public void IsShot()
    {
        foreach (Transform child in transform)
        {
            child.gameObject.AddComponent<Rigidbody>().AddExplosionForce(10, transform.position, 5, 3);
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Bullet")
        {
            IsShot();
        }
    }

    private void Update()
    {
        if (transform.childCount == 0)
        {
            Destroy(gameObject);
        }
    }
}

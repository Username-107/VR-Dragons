using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public bool piercing = false;
    // Start is called before the first frame update

    //bullet speed
    public float speed = 10.5f;
    //rigidbody of the bullet

    Rigidbody rb;
   
    void Start()
    {
        //initialize the variables
        rb = transform.GetComponent<Rigidbody>();
      
        //move the bullet
        rb.velocity = transform.forward * speed;  
    }

  
   
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "BulletStopper" && piercing==false)
        {
            Destroy(gameObject);
        }
    }
}

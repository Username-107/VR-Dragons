using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OVR;
public class Shooting : MonoBehaviour
{
   
    public float fireRate = 0.1f;
    public GameObject bulletPrefab;
    public AudioClip gunSound;
    float elapsedTime;

    public Transform nozzleTransform;

 
    //public Animator gunAnimator;
    

    // Update is called once per frame
    void Update()
    {
        //elapsed time
        elapsedTime += Time.deltaTime;

        if (OVRInput.Get(OVRInput.Button.SecondaryIndexTrigger))
        {
            if (elapsedTime > fireRate)
            {
                Shoot();
                
                elapsedTime = 0;
            }
        }

    }

    private void Shoot()
    {
        //Play sound
        //AudioManager.instance.gunSound.gameObject.transform.position = nozzleTransform.position;
        //AudioManager.instance.gunSound.Play();
        AudioSource.PlayClipAtPoint(gunSound, transform.position);

        //Play animation
        //gunAnimator.SetTrigger("Fire");

      
        //Create the bullet
        GameObject bulletGameobject = Instantiate(bulletPrefab, nozzleTransform.position, Quaternion.Euler(0, 0, 0));
        bulletGameobject.transform.forward = nozzleTransform.forward;

    }

   


}

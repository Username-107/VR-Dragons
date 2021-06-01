using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hand : MonoBehaviour
{
    public Climber climber;
    public OVRInput.Controller controller;
    public Vector3 Delta { private set; get;}
    GameObject currentPoint;
    public List<GameObject> contactPoints;
    public SkinnedMeshRenderer meshRenderer;

    Vector3 lastPosition;
    private void Start()
    {
        lastPosition = transform.position;
    }
    private void Update()
    {
        if(OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger, controller))
        {
            GrabPoint();
        }
        if (OVRInput.GetUp(OVRInput.Button.PrimaryIndexTrigger, controller))
        {
            ReleasePoint();
        }
    }
    private void FixedUpdate()
    {
        lastPosition = transform.position;
    }
    private void LateUpdate()
    {
        Delta = lastPosition - transform.position;
    }
    void GrabPoint()
    {
        currentPoint = Utility.GetNearest(transform.position, contactPoints);

        if (currentPoint)
        {
            climber.SetHand(this);
            meshRenderer.enabled = false;
        }
    }

    public void ReleasePoint()
    {
        if (currentPoint)
        {
            climber.ClearHand();
            meshRenderer.enabled = true;
        }

        currentPoint = null;
    }

    private void OnTriggerEnter(Collider other)
    {
        AddPoint(other.gameObject);
    }


    private void OnTriggerExit(Collider other)
    {
        RemovePoint(other.gameObject);
    }

    void AddPoint(GameObject newObject)
    {
        if(newObject.tag=="ClimbPoint")
        {
            contactPoints.Add(newObject);
        }
    }

    void RemovePoint(GameObject newObject)
    {
        if (newObject.tag == "ClimbPoint")
        {
            contactPoints.Remove(newObject);
        }
    }
}

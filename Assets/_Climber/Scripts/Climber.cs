using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Climber : MonoBehaviour
{
    public float sensitivity = 80;
    public float gravity = 45;
    Hand currentHand;
    public CharacterController controller;
    private void Update()
    {
        CalculateMovement();
    }

    void CalculateMovement()
    {
        Vector3 movement = Vector3.zero;

        if (currentHand)
            movement += currentHand.Delta * sensitivity;

        if (movement == Vector3.zero)
            movement.y -= gravity * Time.deltaTime;
        controller.Move(movement * Time.deltaTime);
    }

    public void SetHand(Hand hand)
    {
        if (currentHand)
            currentHand.ReleasePoint();
        currentHand = hand;
    }

    public void ClearHand()
    {
        currentHand = null;
    }
}

using UnityEngine;
using System.IO.Ports;
using System;

public class MotorController : MonoBehaviour
{
    // Make sure COM8 matches your Arduino port
    SerialPort serial = new SerialPort("COM8", 9600);

    void Start()
    {
        try 
        {
            serial.Open();
            Debug.Log("Connected to Motor on COM8");
        }
        catch (Exception e)
        {
            Debug.LogError("Serial Error: " + e.Message);
        }
    }

    // Connect this to your 'ON' Button in the Inspector
    public void TurnMotorOn()
    {
        if (serial.IsOpen)
        {
            serial.Write("1");
            Debug.Log("Sent Motor ON");
        }
    }

    // Connect this to your 'OFF' Button in the Inspector
    public void TurnMotorOff()
    {
        if (serial.IsOpen)
        {
            serial.Write("0");
            Debug.Log("Sent Motor OFF");
        }
    }

    // Closes the port when you stop the game
    void OnApplicationQuit()
    {
        if (serial != null && serial.IsOpen)
        {
            serial.Close();
        }
    }
}
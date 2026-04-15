using UnityEngine;
using System.IO.Ports;
using System; // Required for Exception handling

public class LedOnOff : MonoBehaviour
{
    // 1. Double-check this COM number in Device Manager
    // 2. Ensure the Arduino Serial Monitor is CLOSED in the Arduino IDE
    SerialPort serial = new SerialPort("COM8", 9600);

    void Start()
    {
        try 
        {
            serial.Open();
            serial.ReadTimeout = 50; // Short timeout to keep the game smooth
            Debug.Log("Serial Port opened on COM8");
        }
        catch (Exception e)
        {
            Debug.LogError("Could not open Serial Port: " + e.Message);
        }
    }

    void Update()
    {
        // Only try to read if the port is actually open and there is data waiting
        if (serial.IsOpen && serial.BytesToRead > 0)
        {
            try 
            {
                string data = serial.ReadLine();
                
                // Ensure data isn't empty before parsing
                if (!string.IsNullOrEmpty(data))
                {
                    float value = float.Parse(data);
                    // Standard Arduino Potentiometer range is 0-1023
                    transform.rotation = Quaternion.Euler(0, value * 360f / 1023f, 0);
                }
            }
            catch (TimeoutException) 
            {
                // This is normal, it just means no data arrived in time
            }
            catch (Exception e)
            {
                Debug.LogWarning("Read error: " + e.Message);
            }
        }
    }

    // This is critical to prevent the port from "locking" after the game stops
    void OnDisable()
    {
        if (serial != null && serial.IsOpen)
        {
            serial.Close();
            Debug.Log("Serial Port closed.");
        }
    }

    public void turnOn()
    {
        if (serial.IsOpen)
        {
            serial.WriteLine("1");
            Debug.Log("Sent: 1");
        }
    }

    public void turnOff()
    {
        if (serial.IsOpen)
        {
            serial.WriteLine("0");
            Debug.Log("Sent: 0");
        }
    }
}
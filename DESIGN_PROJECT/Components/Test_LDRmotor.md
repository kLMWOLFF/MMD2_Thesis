# Test to see if components are working

## ESP32-C3 Super Mini:

### Test1: board is alive
Set the following parameters for the board at Arduino IDE:
    
    - Go to Tools → Board → esp32 (Select ESP32C3 Dev Module)

Configure USB & Flash Settings (CRITICAL STEP) - Go to the Tools menu and set these specific options:
![alt text](<../IMG_ref/Screenshot 2026-04-14 173836.png>)    

To run the test:
1. Hold the Boot button down (keep it down until step 4)
2. Connect the ESP32-C3 via USB
3. Upload the following code:

        void setup() {
        // Initialize Serial at 115200
        Serial.begin(115200);
        
        // Wait for Serial port to connect. 
        // On some Super Minis, you need to open the monitor AFTER upload.
        delay(2000); 
        
        Serial.println("--------------------------------");
        Serial.println("ESP32-C3 Super Mini TEST SUCCESS");
        Serial.println("--------------------------------");
        }

        void loop() {
        Serial.print("Uptime: ");
        Serial.print(millis());
        Serial.println(" ms");
        delay(1000);
        }

4. When compiling is over (message: "Hard resetting via RTS pin..."), let go of the Boot button.
5. Press the RST button once

---------

### Test2: I2C Scanner
1. Copy the following code to IDE:

        #include <Wire.h>
        #include <Adafruit_DRV2605.h>

        Adafruit_DRV2605 drv;

        // ESP32-C3 Super Mini I2C Pins
        #define I2C_SDA 6
        #define I2C_SCL 7

        void setup() {
        Serial.begin(115200);
        while (!Serial) delay(10);
        
        Serial.println("Starting DRV2605 Test on Super Mini...");

        // Initialize I2C
        Wire.begin(I2C_SDA, I2C_SCL);

        // Initialize Driver
        if (!drv.begin()) {
            Serial.println("❌ ERROR: Could not find DRV2605. Check SDA/SCL wiring!");
            while (1);
        }
        Serial.println("✅ DRV2605 Found! Ready to vibe.");

        // Configure for LRA
        drv.setMode(DRV2605_MODE_INTTRIG);
        drv.useLRA(); 
        drv.selectLibrary(4); // Start with Library 4 (170Hz)
        
        Serial.println("🚀 Playing effects every 1 second...");
        }

        void loop() {
        Serial.println("Playing Effect #1");
        drv.setWaveform(0, 1); 
        drv.go();
        
        delay(1000); // Wait for effect + pause
        
        Serial.println("Playing Effect #2");
        drv.setWaveform(0, 2); 
        drv.go();
        
        delay(1000);
        }

2. Disconnect everything from the ESP32.
3. Connect Grounds (ESP32, Driver, External 5V Source).
4. Connect SDA/SCL (GPIO 6/7).
5. Connect VIN (from External 5V).
6. Upload the I2C Scanner. Confirm you see 0x5A.
7. Upload the Test Code.

Feel the click!
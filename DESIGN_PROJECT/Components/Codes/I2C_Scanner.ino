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
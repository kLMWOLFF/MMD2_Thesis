#include <Wire.h>

const int sda_pin = 6;
const int scl_pin = 7;
const int8_t i2c_addr = 0x69;

// Variables for calibration
float offsetX = 0, offsetY = 0, offsetZ = 0;

void setup() {
  Serial.begin(115200);
  delay(2000);
  
  Wire.begin(sda_pin, scl_pin, 100000);
  Serial.println("--- BMI160 Verified Manual Mode ---");

  // Wake up Gyro (CMD Register 0x7E, write 0x15)
  Wire.beginTransmission(i2c_addr);
  Wire.write(0x7E); 
  Wire.write(0x15); 
  Wire.endTransmission();
  delay(300); // Give it time to stabilize

  // CALIBRATION: Read first 100 samples to find the 'zero' point
  Serial.println("Calibrating... DO NOT MOVE SENSOR");
  for (int i = 0; i < 100; i++) {
    Wire.beginTransmission(i2c_addr);
    Wire.write(0x0C); 
    Wire.endTransmission(false);
    Wire.requestFrom(i2c_addr, (uint8_t)6);
    if (Wire.available() == 6) {
      offsetX += (int16_t)(Wire.read() | (Wire.read() << 8));
      offsetY += (int16_t)(Wire.read() | (Wire.read() << 8));
      offsetZ += (int16_t)(Wire.read() | (Wire.read() << 8));
    }
    delay(10);
  }
  offsetX /= 100; offsetY /= 100; offsetZ /= 100;
  Serial.println("Calibration Done!");
}

void loop() {
  Wire.beginTransmission(i2c_addr);
  Wire.write(0x0C); 
  Wire.endTransmission(false);
  Wire.requestFrom(i2c_addr, (uint8_t)6);
  
  if (Wire.available() == 6) {
    // Read and subtract offset
    int16_t rx = (int16_t)(Wire.read() | (Wire.read() << 8));
    int16_t ry = (int16_t)(Wire.read() | (Wire.read() << 8));
    int16_t rz = (int16_t)(Wire.read() | (Wire.read() << 8));

    // Convert to Degrees per Second (°/s)
    // Formula: (RawValue - Offset) / Sensitivity
    float gx = (rx - offsetX) / 16.4;
    float gy = (ry - offsetY) / 16.4;
    float gz = (rz - offsetZ) / 16.4;

    Serial.print("X: "); Serial.print(gx, 2);
    Serial.print("\tY: "); Serial.print(gy, 2);
    Serial.print("\tZ: "); Serial.println(gz, 2);
  }
  delay(50); 
}
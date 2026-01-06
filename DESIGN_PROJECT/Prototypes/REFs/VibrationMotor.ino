int motorPin = 6;

void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  // Ensure motor starts OFF
  digitalWrite(motorPin, LOW); 
}

void loop() {
  if (Serial.available() > 0) {
    char cmd = Serial.read();
    
    if (cmd == '1') {
      digitalWrite(motorPin, HIGH);
    } 
    else if (cmd == '0') {
      digitalWrite(motorPin, LOW);
    }

    // Flush any remaining characters (like \n or \r)
    while(Serial.available() > 0) {
      Serial.read();
    }
  }
}
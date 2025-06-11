char command;

void setup() {
  Serial.begin(9600);     // Start Serial for Bluetooth
  pinMode(13, OUTPUT);    // LED or relay on pin 13
}

void loop() {
  if (Serial.available()) {
    command = Serial.read();
    if (command == '1') {
      digitalWrite(13, HIGH); // Turn ON
    }
    else if (command == '0') {
      digitalWrite(13, LOW);  // Turn OFF
    }
  }
}

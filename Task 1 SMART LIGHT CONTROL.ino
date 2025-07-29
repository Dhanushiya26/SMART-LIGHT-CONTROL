String command = "";

void setup() {
  pinMode(13, OUTPUT); // LED pin
  Serial.begin(9600);
  Serial.println("Type ON or OFF to control LED");
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.readStringUntil('\n');
    command.trim(); // remove any whitespace

    if (command == "ON") {
      digitalWrite(13, HIGH);
      Serial.println("LED is ON");
    } else if (command == "OFF") {
      digitalWrite(13, LOW);
      Serial.println("LED is OFF");
    } else {
      Serial.println("Invalid command. Use ON or OFF.");
    }
  }
}

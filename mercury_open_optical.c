/*
    Project name : Mercury open optical module
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-mercury-open-optical-module
*/

const int sensorPin = 2; // Digital pin connected to the Mercury open optical module

void setup() {
  pinMode(sensorPin, INPUT); // Set the pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the state of the sensor
  int sensorValue = digitalRead(sensorPin);

  // Print the state to the Serial Monitor
  if (sensorValue == HIGH) {
    Serial.println("Object detected in the optical path");
  } else {
    Serial.println("No object detected in the optical path");
  }

  delay(1000); // Add a small delay to avoid spamming the Serial Monitor
}

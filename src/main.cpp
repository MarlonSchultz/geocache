#include <Arduino.h>

const int LED_PIN = 27;

void setup() {
  // Configure pin 27 as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn LED on
  digitalWrite(LED_PIN, HIGH);
  delay(1000); // Wait 1 second
  
  // Turn LED off  
  digitalWrite(LED_PIN, LOW);
  delay(1000); // Wait 1 second
}
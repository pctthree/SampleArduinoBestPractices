#include <Arduino.h>
#include <SampleArduinoBestPractices.h>

void setup() {
  // put your setup code here, to run once:
   pinMode(blinkLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink(blinkLed, blinkInterval);
}


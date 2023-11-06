#include <Arduino.h>
void blink(int blinkLed, int blinkInterval) {
    digitalWrite(blinkLed, HIGH);
    delay(blinkInterval);
    digitalWrite(blinkLed, LOW);
    delay(blinkInterval);
}
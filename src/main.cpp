#include <Arduino.h>

int LightPinNumber = 9;
int DelayTime = 1000;

void setup() {
  pinMode(LightPinNumber, OUTPUT);
  digitalWrite(LightPinNumber, LOW);
}

void loop() {
  digitalWrite(LightPinNumber, HIGH);
  delay(DelayTime);

  digitalWrite(LightPinNumber, LOW);
  delay(DelayTime);
}

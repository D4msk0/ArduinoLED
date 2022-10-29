#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}
int null = -1;
int potValue, potValPrev = null;

void loop() {                 
  potValue = analogRead(A0);
  int value = map(potValue, 0, 1023, 0, 255);
  if (value != potValPrev && value % 5 == 0)
  {
    potValPrev = value;
    Serial.println(value);
  }
}
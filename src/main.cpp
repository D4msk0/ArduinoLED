#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

//Prototype
void readPot();

void loop() {                 
  readPot();
}

//Function
void readPot(){
  int null = -1;
  static int potValue, potValPrev = null;

  potValue = analogRead(A0);
  int value = map(potValue, 0, 1023, 0, 255);
  if (value != potValPrev && value % 5 == 0)
  {
    potValPrev = value;
    Serial.println(value);
  }
}
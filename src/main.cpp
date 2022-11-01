#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include "potmeter.h"

void setup() {
  Serial.begin(9600);
}


void loop() {                 
  Serial.println(readPot());
}


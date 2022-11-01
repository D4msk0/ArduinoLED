#include <Arduino.h>
#include "potmeter.h"

void setup() {
  Serial.begin(9600);
}


void loop() {                 
  Serial.println(readPot());
}


#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include "potmeter.h"

#define PIN 2
#define NUMPIX 29

Adafruit_NeoPixel pixels(NUMPIX, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  Serial.begin(9600);

  pixels.begin();
  pixels.setBrightness(150);
  pixels.clear();

  pixels.setPixelColor(0, pixels.Color(150, 0, 0));
  pixels.show();
}

int hue, num, value = 0;
void loop()
{
  value = readPot();

  hue = map(value, 0, 1023, 0, 255);
  num = map(value, 0, 1023, 0, 28);

  pixels.clear();
  pixels.setPixelColor(num, pixels.Color(hue, 0, 0));
  pixels.show();
}

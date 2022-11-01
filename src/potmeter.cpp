#include "potmeter.h"

#include <Arduino.h>

int readPot()
{
    int value = map(analogRead(A0), 0, 1023, 0, 255);
    return value;
}
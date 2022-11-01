#include "potmeter.h"

#include <Arduino.h>

int readPot()
{
    return analogRead(A0);
}
#include <Arduino.h>

#include "serial.h"

void SerialInit(long baudRate)
{
  Serial.begin(baudRate);
}

void SerialPrintln(char **str)
{
  Serial.println(*str);
}

#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.setDebugOutput(true);
  Serial.println("Hello!");
}

void loop()
{
}
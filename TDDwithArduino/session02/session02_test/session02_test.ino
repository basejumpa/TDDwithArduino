#include <ArduinoUnit.h>

test(shortcut) 
{
  pinMode(3, INPUT);
  assertEqual(digitalRead(3),HIGH);
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Test::run();
}

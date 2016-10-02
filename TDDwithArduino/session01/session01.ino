#include <ArduinoUnit.h>

test(shortcut) 
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  
  digitalWrite(2, HIGH);
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

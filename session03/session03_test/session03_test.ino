#include <ArduinoUnit.h>

test(on) 
{
  digitalWrite(4, HIGH);
  assertEqual(digitalRead(3), HIGH);
}

test(off) 
{
  digitalWrite(4, LOW);
  assertEqual(digitalRead(3), LOW);
}

void setup()
{
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Test::run();
}

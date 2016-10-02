#include <ArduinoUnit.h>

/** The LED shall be on 2secs after reset or earlier. */
test(reset) 
{
  digitalWrite(4, LOW);
  digitalWrite(4, HIGH);

  assertEqual(digitalRead(3), LOW);
  delay(2000);
  assertEqual(digitalRead(3), HIGH);
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

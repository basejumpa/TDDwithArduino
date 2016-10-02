#include <ArduinoUnit.h>

test(01_startup) 
{
  for(int i = 0; i < 2; ++i){  
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    delay(100);
    digitalWrite(4, HIGH);
    
    assertEqual(digitalRead(3), LOW);
    delay(1500);
    assertEqual(digitalRead(3), HIGH);
  }
}

test(02_switching) 
{
  for(int i = 0; i < 2; ++i){  
    digitalWrite(5, LOW);
    delay(25);
    assertEqual(digitalRead(3), LOW);

    digitalWrite(5, HIGH);
    delay(25);
    assertEqual(digitalRead(3), HIGH);
  }
}

void setup()
{
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  Test::run();
}

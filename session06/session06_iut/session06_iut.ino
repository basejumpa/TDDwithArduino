void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, INPUT);    
}

void loop()
{
  digitalWrite(2, digitalRead(3));
}

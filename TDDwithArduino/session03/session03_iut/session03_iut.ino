void setup()
{
    pinMode(2, OUTPUT);
    pinMode(5, INPUT);
}

void loop()
{
  digitalWrite(2, digitalRead(5));
}

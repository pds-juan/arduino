int tempo = 0;

void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  tempo = 5;
  digitalWrite(10, HIGH);
  delay(1000 * tempo);
  digitalWrite(10, LOW);
  delay(1000 * tempo);
}
int pinoLed = 13;

void setup()
{
  pinMode(pinoLed, OUTPUT);
}

void loop()
{
  digitalWrite(pinoLed, HIGH);
  
  delay(2000); // milissegundos
  
  digitalWrite(pinoLed, LOW);
  
  delay(2000);
}
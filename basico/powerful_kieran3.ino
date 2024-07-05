void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  int intensidade = 0; // variável local
  for (intensidade = 0; intensidade <= 255; intensidade += 5) {
    analogWrite(10, intensidade);
    delay(50);
  }
}
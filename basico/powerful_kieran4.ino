int intensidade = 0; // variável global

void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  for (intensidade = 0; intensidade <= 255; intensidade += 5) {
    analogWrite(10, intensidade);
    delay(50);
  }
  for (intensidade = 255; intensidade >= 0; intensidade -= 5) {
    analogWrite(10, intensidade);
    delay(50);
  }
}
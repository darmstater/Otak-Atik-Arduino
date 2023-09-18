// C++ code
//
int led = 5;
int pinPot = A0;
int nilaiPot = 0;

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  nilaiPot = analogRead(pinPot);
  nilaiPot = map(nilaiPot, 0, 1023, 0, 5);
  Serial.print("nilai Potensio: ");Serial.println(nilaiPot);
  if (nilaiPot >=1)
  {
    digitalWrite(6, HIGH);
  }else digitalWrite(6, LOW);
    if (nilaiPot >=2)
    {
    digitalWrite(2, HIGH);
    }else digitalWrite(2, LOW);
      if (nilaiPot >=3)
    {
    digitalWrite(3, HIGH);
    }else digitalWrite(3, LOW);
    if (nilaiPot >=4)
    {
    digitalWrite(4, HIGH);
    }else digitalWrite(4, LOW);
    if (nilaiPot >=5)
    {
    digitalWrite(5, HIGH);
    }else digitalWrite(5, LOW);
}

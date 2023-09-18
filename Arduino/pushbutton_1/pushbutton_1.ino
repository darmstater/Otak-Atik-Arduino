
const int BUTTON = 5;
const int LEDRED = 7;
const int LEDYELLOW = 8;
int BUTTONstate = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);
  pinMode(LEDRED, OUTPUT);
  pinMode(LEDYELLOW, OUTPUT);
}

void loop() {
  //put your main code here, to run repeatedly:
  int r = digitalRead(4);
  Serial.println(r); 
  BUTTONstate = digitalRead(BUTTON);


  if (BUTTONstate == LOW)
  {
    digitalWrite(LEDRED, HIGH);
    digitalWrite(LEDYELLOW, HIGH);
  } 
  else{
    digitalWrite(LEDRED, LOW);
    digitalWrite(LEDYELLOW, LOW);
  }
    if (BUTTONstate == HIGH)
  {
    digitalWrite(LEDYELLOW, HIGH);
    delay(1000);
  } 
  else{
    digitalWrite(LEDYELLOW, LOW);
    delay(1000);
  }
}

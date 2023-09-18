long distance, duration;
int trigPin=8;
int echoPin=9;
void setup() {

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  if (distance>=70){
    digitalWrite(10, HIGH);
    delay(0);
  }else{
      digitalWrite(10, LOW);
      delay(0);
    }
    
  if (distance>= 50){
    digitalWrite(11, HIGH);
    delay(0);
  }else{
      digitalWrite(11, LOW);
      delay(0);
    }

  if (distance>= 30){
    digitalWrite(12, HIGH);
    delay(0);
  }else{
      digitalWrite(12, LOW);
      delay(0);
    }

  if (distance>= 10){
    digitalWrite(13, HIGH);
    delay(0);
  }else{
      digitalWrite(13, LOW);
      delay(0);
    }
  
  
  Serial.print("Jarak = ");
  Serial.print(distance);
  Serial.println(" cm");
}

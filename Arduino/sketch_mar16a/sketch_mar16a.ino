void setup() {
  // put your setup code here, to run once: ngeset sekali
   pinMode(13, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(11, OUTPUT);
}

void loop() { //forever
  // put your main code here, to run repeatedly:
    digitalWrite(13, HIGH); //HIGH = ON bisa diganti dg angka 1
    delay(100); //1000 mili second 1/1000 second
    digitalWrite(13, LOW); //LOW = OFF 
    delay(100); //1000 mili second 1/1000 second

    digitalWrite(8, HIGH); //HIGH = ON bisa diganti dg angka 1
    delay(100); //1000 mili second 1/1000 second
    digitalWrite(8, LOW); //LOW = OFF 
    delay(100); //1000 mili second 1/1000 second

    digitalWrite(11, HIGH); //HIGH = ON bisa diganti dg angka 1
    delay(100); //1000 mili second 1/1000 second
    digitalWrite(11, LOW); //LOW = OFF 
    delay(100); //1000 mili second 1/1000 second
}

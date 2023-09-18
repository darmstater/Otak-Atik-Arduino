#include <Servo.h>
int pos = 0;
Servo servo;
int sudah=0;
void setup()
{
  servo.attach(9);
}
void loop()
{
  int val = analogRead(A1);
    pos=map(val, 0, 1023, 0, 180);
    servo.write(pos);
}

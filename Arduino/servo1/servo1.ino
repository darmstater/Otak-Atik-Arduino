#include <Servo.h>
int pos = 0;
Servo servo;
int sudah=0;
void setup()
{
  servo.attach(9);
  sudah=0;
}
void loop()
{
  if(sudah==0)
  //pos=1;
  //servo.write(pos);
  for (pos = 0; pos <= 180; pos += 60) {
    servo.write(pos);
    delay(400);
  }
  for (pos = 180; pos >= 0; pos -= 60) {
    servo.write(pos);
    delay(400);
  }
  sudah=1;
}

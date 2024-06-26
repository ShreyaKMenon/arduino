// C++ code
//
#include<Servo.h>
Servo myServo;
int servopin=9;
int i;
void setup()
{
  myServo.attach(servopin);
}
void loop()
{
  for(i=0;i<=180;i++)
  {
    myServo.write(i);
    delay(100);
  }
  for(i=180;i>=0;i--)
  {
    myServo.write(i);
    delay(100);
  }
}

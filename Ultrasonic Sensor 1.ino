// C++ code
//
#include <ULtrasonic.h>
ULtrasonic ultrasonic(12,13)
int distance;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  distance=ultrasonic.read();
  Serial.print("Distance in cm:");
  Serial.print(distance);
  delay(1000);
}
                   
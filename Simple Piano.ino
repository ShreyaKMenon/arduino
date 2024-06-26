// C++ code
//
int buzzerpin=9;
void setup()
{
  pinMode(buzzerpin,OUTPUT);
}
void loop()
{
  tone(buzzerpin,500);
  delay(1000);
  noTone(buzzerpin);
  delay(1000);
  tone(buzzerpin,1000);
  delay(1000);
  noTone(buzzerpin);
  delay(1000);
  tone(buzzerpin,3000);
  delay(1000);
  noTone(buzzerpin);
  delay(1000);
  tone(buzzerpin,1000);
  delay(1000);
  noTone(buzzerpin);
  delay(1000);
  tone(buzzerpin,500);
  delay(1000);
  noTone(buzzerpin);
  delay(1000);
}

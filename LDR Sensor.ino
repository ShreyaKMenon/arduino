// C++ code
//
int ldr=A0;
int led=13;
int threshold=500;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop()
{
  int val=analogRead(ldr);
  Serial.print("LDR Value:");
  Serial.println(val);
  if (val>=threshold)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  delay(500);
}
// C++ code
//
int temppin=A0;
int buzzerpin=8;
float threshold=5.0;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzerpin,OUTPUT);
  digitalWrite(buzzerpin,LOW);
}
void loop()
{
  int val=analogRead(temppin);
  float temp=val*(3.0/1023.0)*10;
  Serial.print("Temperature:");
  Serial.print(temp);
  Serial.println("*C");
  if (temp>=threshold)
  {
    digitalWrite(buzzerpin,HIGH);
  }
  else
  {
    digitalWrite(buzzerpin,LOW);
  }
  delay(1000);
}
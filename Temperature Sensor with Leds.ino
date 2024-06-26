// C++ code
//
int temppin=A0;
int led1=2;
int led2=3;
int led3=4;
float threshold=5.0;
void setup()
{
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}
void loop()
{
  int val=analogRead(temppin);
  float temp=val*(3.0/1023.0)*10;
  Serial.print("Temperature:");
  Serial.print(temp);
  Serial.println("*C");
  if (temp>=10.0)
  {
    digitalWrite(led1,HIGH);
    delay(3000);
    digitalWrite(led1,LOW);
  }
  else if(temp<10.0 && temp>=5.0)
  {
    digitalWrite(led2,HIGH);
    delay(3000);
    digitalWrite(led2,LOW);
  }
  else
  {
    digitalWrite(led3,HIGH);
    delay(3000);
    digitalWrite(led3,LOW);
  }
  delay(500);
}
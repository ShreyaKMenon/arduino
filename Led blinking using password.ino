// C++ code
//
int led=6;
int b1=2;
int b2=3;
int b3=4;
int b4=5;
int bs1=0;
int bs2=0;
int bs3=0;
int bs4=0;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(b3,OUTPUT);
  pinMode(b4,OUTPUT);
}
void loop()
{
  bs1=digitalRead(b1);
  bs2=digitalRead(b2);
  bs3=digitalRead(b3);
  bs4=digitalRead(b4);
  if (bs1==HIGH && bs3==HIGH)
  {
    if (bs2==LOW && bs4==LOW)
    {
      digitalWrite(led,HIGH);
    }
    else
    {
      digitalWrite(led,LOW);
    }
  }
  else
  {
    digitalWrite(led,LOW);
  }
}

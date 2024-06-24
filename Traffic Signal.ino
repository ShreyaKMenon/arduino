// C++ code
//
int led1=4;
int led2=3;
int led3=2;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(6000); // Wait for 60000 millisecond(s)
  digitalWrite(led1, LOW);
  digitalWrite(led3, HIGH);
  delay(6000); // Wait for 60000 millisecond(s)
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  delay(1000); // Wait for 60000 millisecond(s)
  digitalWrite(led2, LOW);
}
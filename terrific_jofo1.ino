// C++ code
//
int Red=1;
void setup()
{
  pinMode(Red, OUTPUT);
}

void loop()
{
  digitalWrite(Red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

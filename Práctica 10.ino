// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, LOW);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
}

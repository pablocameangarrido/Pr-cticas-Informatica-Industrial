// C++ code
//
void setup()
{
  pinMode(10, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if (digitalRead(10) == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(10000); // Wait for 10000 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    delay(4000); // Wait for 4000 millisecond(s)
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(10000); // Wait for 10000 millisecond(s)
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(4000); // Wait for 4000 millisecond(s)
  }
}

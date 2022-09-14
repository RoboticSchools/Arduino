// www.roboticschools.com

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  // RED, GREEN, BLUE COLORS
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  // YELLOW, MAGANTA, CYAN COLORS
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  // WHITE COLOUR
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}

// www.roboticschools.com

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  Serial.println("You can GO Now !!!");
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  Serial.println("Ready to STOP ... ");
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  Serial.println("STOP !!!");
  delay(3000); // Wait for 3000 millisecond(s)
}

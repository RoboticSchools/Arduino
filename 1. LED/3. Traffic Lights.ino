
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  Serial.println("STOP !!!");
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  Serial.println("You can GO Now !!!");
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  Serial.println("Ready to STOP ... ");
  delay(2000); // Wait for 2000 millisecond(s)
}

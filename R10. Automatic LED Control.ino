// www.roboticschools.com

void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  int Sensor = digitalRead(7);
  Serial.println(Sensor);
  if (Sensor == 1) {
    digitalWrite(9, HIGH);
  }
  if (Sensor == 0) {
    digitalWrite(9, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}

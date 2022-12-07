//www.roboticschools.com

void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop()
{
  int sensor = digitalRead(7);
  Serial.println(sensor);
  if (sensor == 0) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}

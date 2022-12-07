//www.roboticschools.com

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(0, OUTPUT);
}

void loop()
{
  int sensor = analogRead(A0);
  Serial.println(sensor);
  if (sensor < 300) {
    digitalWrite(0, HIGH);
  } else {
    digitalWrite(0, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}

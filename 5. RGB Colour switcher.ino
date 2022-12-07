// www.roboticschools.com

void setup()
{
  pinMode(3, INPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  int button = digitalRead(3);
  if (button == 1) {
    analogWrite(11, random(0, 255 + 1));
    analogWrite(9, random(0, 255 + 1));
    analogWrite(10, random(0, 255 + 1));
    delay(300); // Wait for 300 millisecond(s)
  }
}

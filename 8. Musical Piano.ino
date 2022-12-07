//www.roboticschools.com

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  
  pinMode(8, OUTPUT);
}

void loop()
{
  if (digitalRead(A0) == HIGH) {
    tone(8, 440, 300); // play tone 57 (A4 = 440 Hz)
  }
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 300); // play tone 59 (B4 = 494 Hz)
  }
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 300); // play tone 60 (C5 = 523 Hz)
  }
  if (digitalRead(A3) == HIGH) {
    tone(8, 554, 300); // play tone 61 (C#5 = 554 Hz)
  }
  if (digitalRead(A4) == HIGH) {
    tone(8, 587, 300); // play tone 62 (D5 = 587 Hz)
  }
  if (digitalRead(A5) == HIGH) {
    tone(8, 698, 300); // play tone 65 (F5 = 698 Hz)
  }
  delay(10); // Delay a little bit to improve simulation performance
}

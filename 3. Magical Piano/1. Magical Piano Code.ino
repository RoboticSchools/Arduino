
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
    tone(8, 440, 300); 
  }
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 300); 
  }
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 300); 
  }
  if (digitalRead(A3) == HIGH) {
    tone(8, 554, 300); 
  }
  if (digitalRead(A4) == HIGH) {
    tone(8, 587, 300); 
  }
  if (digitalRead(A5) == HIGH) {
    tone(8, 698, 300); 
  }
}

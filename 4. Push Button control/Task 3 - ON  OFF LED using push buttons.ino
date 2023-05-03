const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin = 9;

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  
  if (buttonState1 == LOW) {
    digitalWrite(ledPin, HIGH);
  } else if (buttonState2 == LOW) {
    digitalWrite(ledPin, LOW);
  }
}

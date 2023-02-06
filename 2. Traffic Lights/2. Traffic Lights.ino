const int redPin = 9;
const int yellowPin = 10;
const int greenPin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Red light on
  digitalWrite(redPin, HIGH);
  delay(3000);
  digitalWrite(redPin, LOW);

  // Green light on
  digitalWrite(greenPin, HIGH);
  delay(3000);
  digitalWrite(greenPin, LOW);

  // Yellow light on
  digitalWrite(yellowPin, HIGH);
  delay(1000);
  digitalWrite(yellowPin, LOW);
}

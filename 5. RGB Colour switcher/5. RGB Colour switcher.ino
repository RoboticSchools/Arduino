const int buttonPin = 2;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    redValue = random(255);
    greenValue = random(255);
    blueValue = random(255);
    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);
    delay(500);
  }
}

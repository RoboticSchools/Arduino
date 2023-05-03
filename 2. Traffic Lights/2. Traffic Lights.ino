int redLedPin = 11;    // Define the red LED pin number
int yellowLedPin = 10; // Define the yellow LED pin number
int greenLedPin = 9;   // Define the green LED pin number

void setup() {
  pinMode(redLedPin, OUTPUT);     // Set the red LED pin as output
  pinMode(yellowLedPin, OUTPUT);  // Set the yellow LED pin as output
  pinMode(greenLedPin, OUTPUT);   // Set the green LED pin as output
}

void loop() {
  // Red light on, green and yellow off
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, LOW);
  delay(5000);

  // Red and yellow light on, green off
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  delay(2000);

  // Green light on, red and yellow off
  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, HIGH);
  delay(5000);

  // Yellow light on, red and green off
  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  delay(2000);
}

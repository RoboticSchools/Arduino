// Define the pins for the motor
int motorPin1 = 8;
int motorPin2 = 9;

void setup() {
  // Set the motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // Turn the motor clockwise (forward) for 2 seconds
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(2000);

  // Turn the motor counterclockwise (backward) for 2 seconds
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  delay(2000);
}

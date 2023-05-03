int redLedPin = 11;  // Define the red LED pin number
int blueLedPin = 12; // Define the blue LED pin number
void setup() {
  pinMode(redLedPin, OUTPUT);   // Set the red LED pin as output
  pinMode(blueLedPin, OUTPUT);  // Set the blue LED pin as output
}
void loop() {
  digitalWrite(redLedPin, HIGH);   // Turn on the red LED
  digitalWrite(blueLedPin, LOW);   // Turn off the blue LED
  delay(500);                      // Wait for half a second
  digitalWrite(redLedPin, LOW);    // Turn off the red LED
  digitalWrite(blueLedPin, HIGH);  // Turn on the blue LED
  delay(500);                      // Wait for half a second
}

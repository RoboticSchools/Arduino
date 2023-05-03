int ledPin = 13;  // Define the LED pin number
void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
}
void loop() {
  digitalWrite(ledPin, HIGH);  // Turn on the LED
  delay(1000);  // Wait for one second
  digitalWrite(ledPin, LOW);  // Turn off the LED
  delay(1000);  // Wait for one second
}

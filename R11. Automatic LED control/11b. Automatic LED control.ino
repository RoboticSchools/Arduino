// Define the pin numbers for the LED and LDR sensor
const int ledPin = 9;
const int ldrPin = 8;

void setup() {
  // Start the serial communication at 9600 bits per second
  Serial.begin(9600);
  // Set the LDR pin as an input
  pinMode(ldrPin,INPUT);
  // Set the LED pin as an output pin
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the value of the LDR sensor
  int ldrValue = digitalRead(ldrPin);

  // Print the value to the serial monitor
  Serial.print("LDR value: ");
  Serial.println(ldrValue);

  // If the LDR value is LOW, turn the LED on
  if (ldrValue == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  // Wait for 100 milliseconds before reading again
  delay(100);
}

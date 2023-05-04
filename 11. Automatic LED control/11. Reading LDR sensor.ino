// Define the pin number for the LDR sensor
const int ldrPin = 8;

void setup() {
  // Start the serial communication at 9600 bits per second
  Serial.begin(9600);
  // Set the LDR pin as an input
  pinMode(ldrPin,INPUT);
}

void loop() {
  // Read the value of the LDR sensor
  int ldrValue = digitalRead(ldrPin);

  // Print the value to the serial monitor
  Serial.print("LDR value: ");
  Serial.println(ldrValue);

  // Wait for 100 milliseconds before reading again
  delay(100);
}

int ldrPin = 8; // LDR sensor connected to pin 8

void setup() {
  pinMode(ldrPin, INPUT); // Set LDR pin as input
  Serial.begin(9600); // Initialize serial communication for debugging
}

void loop() {
  int ldrValue = digitalRead(ldrPin); // Read LDR sensor value
  Serial.println(ldrValue); // Print LDR value on serial monitor
  
  delay(100); // Wait for 100 milliseconds
}

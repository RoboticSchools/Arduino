int ledPin = 13; // Define the LED pin as 13

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  if (Serial.available() > 0) { // If there's data available in serial buffer
    char input = Serial.read(); // Read the incoming data
    if (input == '1') { // If received data is '1'
      digitalWrite(ledPin, HIGH); // Turn on the LED
      Serial.println("LED is on"); // Print message on serial monitor
    }
    else if (input == '0') { // If received data is '0'
      digitalWrite(ledPin, LOW); // Turn off the LED
      Serial.println("LED is off"); // Print message on serial monitor
    }
  }
}

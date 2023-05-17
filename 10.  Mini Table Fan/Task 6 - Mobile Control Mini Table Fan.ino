#include <SoftwareSerial.h>

// Define the pins for the motor
int motorPin1 = 8;
int motorPin2 = 9;

// Create a software serial object
SoftwareSerial mySerial(2, 3);

void setup() {
  // Set the motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  // Start the serial communication
  mySerial.begin(9600);
}

void loop() {
  if (mySerial.available() > 0) {
    char input = mySerial.read();

    if (input == 'F') {
      // Turn the motor clockwise (forward)
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, LOW);
    } else if (input == 'B') {
      // Turn the motor counterclockwise (backward)
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, HIGH);
    } else {
      // Stop the motor
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, LOW);
    }
  }
}

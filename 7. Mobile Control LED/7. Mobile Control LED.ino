#include <SoftwareSerial.h>  // Library for creating software serial ports

SoftwareSerial BTserial(10, 11);  // Create a software serial port using digital pins 10 (RX) and 11 (TX)

int ledPin = 9;  // Define the LED pin

void setup() {
  BTserial.begin(9600);  // Start the serial communication with the Bluetooth module at a baud rate of 9600
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
}

void loop() {
  if (BTserial.available()) {  // Check if data is available on the serial port
    char data = BTserial.read();  // Read the data from the serial port
    
    if (data == '1') {  // If the data received is '1'
      digitalWrite(ledPin, HIGH);  // Turn on the LED
    } else if (data == '0') {  // If the data received is '0'
      digitalWrite(ledPin, LOW);  // Turn off the LED
    }
  }
}

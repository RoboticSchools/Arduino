
Arduino code for Bluetooth controlled LED using Arduino, HC05, and LED:

```c++
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
```

Now, let's go through the code line by line to understand how it works:

```c++
#include <SoftwareSerial.h>
```
This line includes the SoftwareSerial library, which allows us to create a software serial port.

```c++
SoftwareSerial BTserial(10, 11);
```
This line creates a software serial port called "BTserial" using digital pins 10 (RX) and 11 (TX). This is where we will receive data from the HC05 Bluetooth module.

```c++
int ledPin = 9;
```
This line defines the LED pin as pin 9.

```c++
void setup() {
  BTserial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
```
In the setup function, we start the serial communication with the Bluetooth module at a baud rate of 9600, and set the LED pin as an output.

```c++
void loop() {
  if (BTserial.available()) {
    char data = BTserial.read();
    if (data == '1') {
      digitalWrite(ledPin, HIGH);
    } else if (data == '0') {
      digitalWrite(ledPin, LOW);
    }
  }
}
```
In the loop function, we check if there is any data available on the serial port. If there is, we read the data and store it in the "data" variable.

If the data received is '1', we turn on the LED by setting the LED pin to HIGH. If the data received is '0', we turn off the LED by setting the LED pin to LOW.

So, this code allows you to control an LED using a Bluetooth module (HC05) and a smartphone app or other Bluetooth device that can send data. When the app sends the character '1', the LED turns on, and when it sends '0', the LED turns off.

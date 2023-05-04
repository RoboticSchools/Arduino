# Arduino 7 - Mobile Control LED 

Here's an Arduino code for mobile controlled LED using Bluetooth module HC-05. The code reads data in an integer format, and turns on or off the LED based on the received value.

```C++
// Include required libraries
#include <SoftwareSerial.h>

// Define pin numbers for LED and Bluetooth module
int ledPin = 9;
SoftwareSerial BTSerial(2, 3); // RX, TX

void setup() {
  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);

  // Set up the Bluetooth module with baud rate of 9600
  BTSerial.begin(9600);
}

void loop() {
  // Check if there is any data available from the mobile app
  if (BTSerial.available()) {
    // Read the data in integer format
    int data = BTSerial.parseInt();

    // Check if the received data is 1 or 0
    if (data == 1) {
      digitalWrite(ledPin, HIGH); // Turn on the LED
    } else if (data == 0) {
      digitalWrite(ledPin, LOW); // Turn off the LED
    }
  }
}
```

Now let's go through the code line by line to understand it better:

```C++
#include <SoftwareSerial.h>
```
This line includes the SoftwareSerial library, which allows serial communication on other digital pins of the Arduino besides the hardware serial port.

```C++
int ledPin = 9;
SoftwareSerial BTSerial(2, 3); // RX, TX
```
These two lines define the pin numbers for the LED and the Bluetooth module. Pin 9 is used for the LED, while pins 10 and 11 are used for the RX and TX of the Bluetooth module respectively.

```C++
void setup() {
  pinMode(ledPin, OUTPUT);
  BTSerial.begin(9600);
}
```
In the `setup()` function, we set the LED pin as output using the `pinMode()` function. We also set up the Bluetooth module with a baud rate of 9600 using the `begin()` function of the `SoftwareSerial` library.

```C++
void loop() {
  if (BTSerial.available()) {
    int data = BTSerial.parseInt();
    if (data == 1) {
      digitalWrite(ledPin, HIGH);
    } else if (data == 0) {
      digitalWrite(ledPin, LOW);
    }
  }
}
```
In the `loop()` function, we first check if there is any data available from the mobile app using the `available()` function of the `SoftwareSerial` library. If there is data available, we read it in integer format using the `parseInt()` function.

We then check if the received data is 1 or 0 using the `if-else` statements. If the data is 1, we turn on the LED using the `digitalWrite()` function and set the LED pin to `HIGH`. If the data is 0, we turn off the LED by setting the LED pin to `LOW`. 

That's it! This code should allow you to control an LED with a mobile app using a Bluetooth module.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

```C++
// Include required libraries
#include <SoftwareSerial.h>

// Define pin numbers for LED and Bluetooth module
int ledPin = 9;
SoftwareSerial BTSerial(2, 3); // RX, TX

void setup() {
  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);

  // Set up the Bluetooth module with baud rate of 9600
  BTSerial.begin(9600);
}

void loop() {
  // Check if there is any data available from the mobile app
  if (BTSerial.available()) {
    // Read the data in integer format
    int data = BTSerial.parseInt();

    // Check if the received data is 1 or 0
    if (data == 1) {
      digitalWrite(ledPin, HIGH); // Turn on the LED
    } else if (data == 0) {
      digitalWrite(ledPin, LOW); // Turn off the LED
    } else if (data > 2) {
      analogWrite(ledPin, data);
    }
  }
}
```

However, if the received data is greater than 2, we use the analogWrite() function to set the brightness of the LED. This is because the analogWrite() function is used for pulse-width modulation (PWM), which allows us to control the brightness of an LED by changing the duty cycle of a square wave.

So, if the received data is greater than 2, we assume that the mobile app has sent a value between 3 and 255, which represents the brightness level of the LED. We then use the analogWrite() function to set the LED brightness to the received value.

That's it! This code should allow you to control the on/off state and the brightness level of an LED with a mobile app using a Bluetooth module.

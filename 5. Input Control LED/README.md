```c++
int ledPin = 13
```
1. Define an integer variable named ledPin and assign it the value 13. This pin will be used to control the LED.
```c++
void setup()
```
A function that runs once when the Arduino board is powered up or reset. It is used to initialize variables, pin modes, and other settings.
3.Serial.begin(9600); - Start the serial communication with the baud rate of 9600 bits per second.
4.pinMode(ledPin, OUTPUT); - Set the ledPin as an output pin.
5.void loop() - A function that runs repeatedly as long as the Arduino board is powered up or reset.
6.if (Serial.available() > 0) - Check if there is data available in the serial buffer.
7.char input = Serial.read(); - Read the incoming data and store it in the input variable.
8.if (input == '1') - Check if the received data is equal to the character '1'.
9.digitalWrite(ledPin, HIGH); - Turn on the LED by setting the voltage of the ledPin to HIGH.
10.Serial.println("LED is on"); - Print the message "LED is on" on the serial monitor.
11.else if (input == '0') - If the received data is not '1', check if it's equal to the character '0'.
12.digitalWrite(ledPin, LOW); - Turn off the LED by setting the voltage of the ledPin to LOW.
13.Serial.println("LED is off"); - Print the message "LED is off" on the serial monitor.

```C++
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
```


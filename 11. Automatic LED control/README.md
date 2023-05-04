# Arduino 11 - Reading LDR sensor

Arduino code for reading an LDR sensor connected to pin 8 and printing the result to the serial monitor:

```C++
// Define the pin number for the LDR sensor
const int ldrPin = 8;

void setup() {
  // Start the serial communication at 9600 bits per second
  Serial.begin(9600);
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
```

Here's a detailed explanation of the code:

```C++
// Define the pin number for the LDR sensor
const int ldrPin = 8;
```
In this line, we define a constant variable `ldrPin` to hold the pin number for the LDR sensor. We set it to 8 as per the requirement.

```C++
void setup() {
  // Start the serial communication at 9600 bits per second
  Serial.begin(9600);
  pinMode(ldrpin,INPUT);
}
```
The `setup()` function is called once when the program starts. Here, we start the serial communication with the computer at a baud rate of 9600 bits per second.

```C++
void loop() {
  // Read the value of the LDR sensor
  int ldrValue = digitalRead(ldrPin);

  // Print the value to the serial monitor
  Serial.print("LDR value: ");
  Serial.println(ldrValue);

  // Wait for 100 milliseconds before reading again
  delay(100);
}
```
The `loop()` function is called repeatedly after the `setup()` function. Here, we read the value of the LDR sensor using the `digitalRead()` function, which returns either HIGH or LOW depending on whether the sensor is detecting light or not.

We then print the value of the LDR sensor to the serial monitor using `Serial.print()` and `Serial.println()` functions. This will display the LDR value and a new line on the serial monitor.

Finally, we add a delay of 100 milliseconds using the `delay()` function before reading the LDR sensor again. This is done to prevent the program from reading the LDR too frequently and causing any noise or interference.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Arduino 11 - Automatic LED control using LDR sensor

Arduino code for automatic LED control using an LDR sensor connected to pin 8:

```C++
// Define the pin numbers for the LED and LDR sensor
const int ledPin = 9;
const int ldrPin = 8;

void setup() {
  // Start the serial communication at 9600 bits per second
  Serial.begin(9600);
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
```

Here's a detailed explanation of the code:

```C++
// Define the pin numbers for the LED and LDR sensor
const int ledPin = 9;
const int ldrPin = 8;
```
In this line, we define two constant variables `ledPin` and `ldrPin` to hold the pin numbers for the LED and LDR sensor respectively.

```C++
void setup() {
  // Start the serial communication at 9600 bits per second
  Serial.begin(9600);
  pinMode(ldrPin,INPUT);
  // Set the LED pin as an output pin
  pinMode(ledPin, OUTPUT);
}
```
The `setup()` function is called once when the program starts. Here, we start the serial communication with the computer at a baud rate of 9600 bits per second.

We also set the `ledPin` as an output pin using the `pinMode()` function. This is done because we will be using it to control the LED.

```C++
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
```
The `loop()` function is called repeatedly after the `setup()` function. Here, we read the value of the LDR sensor using the `digitalRead()` function, which returns either HIGH or LOW depending on whether the sensor is detecting light or not.

We then print the value of the LDR sensor to the serial monitor using `Serial.print()` and `Serial.println()` functions. This will display the LDR value and a new line on the serial monitor.

If the LDR value is LOW (meaning the sensor is detecting light), we turn the LED on using the `digitalWrite()` function with the `HIGH` value. If the LDR value is HIGH (meaning the sensor is not detecting light), we turn the LED off using the `digitalWrite()` function with the `LOW` value.

Finally, we add a delay of 100 milliseconds using the `delay()` function before reading the LDR sensor again. This is done to prevent the program from reading the LDR too frequently and causing any noise or interference.

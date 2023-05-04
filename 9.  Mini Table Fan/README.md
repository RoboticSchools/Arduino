# Arduino 9 - Mini Table Fan

```C++
// Define the pins for the motor
int motorPin1 = 8;
int motorPin2 = 9;

void setup() {
  // Set the motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // Turn the motor clockwise (forward) for 2 seconds
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(2000);

  // Turn the motor counterclockwise (backward) for 2 seconds
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  delay(2000);
}
```

Explanation line by line:

```C++
// Define the pins for the motor
int motorPin1 = 8;
int motorPin2 = 9;
```
These lines define two integer variables `motorPin1` and `motorPin2`, which represent the digital pins to which the motor is connected.

```C++
void setup() {
  // Set the motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}
```
The `setup()` function is called once at the beginning of the program. Here, we set the `motorPin1` and `motorPin2` pins as output pins using the `pinMode()` function.

```C++
void loop() {
  // Turn the motor clockwise (forward) for 2 seconds
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(2000);

  // Turn the motor counterclockwise (backward) for 2 seconds
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  delay(2000);
}
```
The `loop()` function is called repeatedly while the program is running. Here, we turn the motor clockwise (forward) by setting `motorPin1` to `HIGH` and `motorPin2` to `LOW` for 2 seconds using the `digitalWrite()` function, and then turn the motor counterclockwise (backward) by setting `motorPin1` to `LOW` and `motorPin2` to `HIGH` for 2 seconds using the same `digitalWrite()` function. 

Finally, we add a `delay()` function to pause the program execution for 2 seconds between each change in the motor direction. This delay is necessary to give the motor enough time to stop before changing its direction. 

Overall, this code uses the `digitalWrite()` function to set the output pins `motorPin1` and `motorPin2` high or low, which controls the direction of the current flow through the motor and thus its direction of rotation. By using a delay between each change in the motor direction, we ensure that the motor has enough time to stop before changing direction.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Task 1 - Input control Mini Table Fan

Arduino code that controls the DC motor using the serial monitor character input:

```C++
// Define the pins for the motor
int motorPin1 = 8;
int motorPin2 = 9;

void setup() {
  // Set the motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read();

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
```

Explanation line by line:

```C++
// Define the pins for the motor
int motorPin1 = 8;
int motorPin2 = 9;
```
These lines define two integer variables `motorPin1` and `motorPin2`, which represent the digital pins to which the motor is connected.

```C++
void setup() {
  // Set the motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  // Start the serial communication
  Serial.begin(9600);
}
```
The `setup()` function is called once at the beginning of the program. Here, we set the `motorPin1` and `motorPin2` pins as output pins using the `pinMode()` function. We also start the serial communication with a baud rate of 9600 using the `Serial.begin()` function.

```C++
void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read();

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
```
The `loop()` function is called repeatedly while the program is running. Here, we first check if there is any data available in the serial buffer using the `Serial.available()` function. If there is data available, we read a character from the serial buffer using the `Serial.read()` function and store it in the `input` variable.

We then use an `if...else` statement to check the value of the `input` variable. If it is equal to 'F', we turn the motor clockwise (forward) by setting `motorPin1` to `HIGH` and `motorPin2` to `LOW` using the `digitalWrite()` function. If it is equal to 'B', we turn the motor counterclockwise (backward) by setting `motorPin1` to `LOW` and `motorPin2` to `HIGH` using the same `digitalWrite()` function. If the `input` variable is anything else, we stop the motor by setting both `motorPin1` and `motorPin2` to `LOW`.

Overall, this code uses the serial communication to read the user input character from the serial monitor and control the DC motor based on the input. If the user inputs 'F', the motor will rotate in the forward direction. If the user inputs 'B', the motor will rotate in the backward direction. If the user inputs any other character, the motor will stop.

Note that this code assumes that the DC motor is connected to pins 8 and 9 on the Arduino board. If your motor is connected to different pins, you will need to update the `motorPin1` and `motorPin2` variables accordingly. Also, make sure that you have connected the motor to an external power supply, since the Arduino board may not be able to provide enough current to drive the motor directly.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Task 2 - Mobile control Mini Table Fan

Sure, here's the modified Arduino code that controls the DC motor using the software serial library with pins 2 and 3 as RX and TX, respectively:

```C++
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
```

Explanation line by line:

```C++
#include <SoftwareSerial.h>
```
This line includes the SoftwareSerial library, which allows us to create a software serial port on any two digital pins of the Arduino board.

```C++
// Define the pins for the motor
int motorPin1 = 8;
int motorPin2 = 9;
```
These lines define two integer variables `motorPin1` and `motorPin2`, which represent the digital pins to which the motor is connected.

```C++
// Create a software serial object
SoftwareSerial mySerial(2, 3);
```
This line creates a software serial object called `mySerial` using pins 2 and 3 as the RX and TX pins, respectively.

```C++
void setup() {
  // Set the motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  // Start the serial communication
  mySerial.begin(9600);
}
```
The `setup()` function is called once at the beginning of the program. Here, we set the `motorPin1` and `motorPin2` pins as output pins using the `pinMode()` function. We also start the serial communication on the `mySerial` object with a baud rate of 9600 using the `begin()` function.

```C++
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
```
The `loop()` function is called repeatedly while the program is running. Here, we first check if there is any data available on the `mySerial` object using the `available()` function. If there is data available, we read a character from the serial buffer using the `read()` function and store it in the `input` variable.

We then use an `if()...else if()...else` statement to check the value of `input`. If `input` is equal to 'F', we set `motorPin1` to HIGH and `motorPin2` to LOW, which causes the motor to rotate in the forward direction. If `input` is equal to 'B', we set `motorPin1` to LOW and `motorPin2` to HIGH, which causes the motor to rotate in the backward direction. If `input` is any other character, we set both `motorPin1` and `motorPin2` to LOW, which stops the motor.

# Arduino 6 - Input Control LED

Here's an Arduino code for controlling an LED using serial monitor input:

```C++
int ledPin = 13;
char command;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    if (command == '1') {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED ON");
    } else if (command == '0') {
      digitalWrite(ledPin, LOW);
      Serial.println("LED OFF");
    }
  }
}
```

Let's go through each line of the code and see what it does:

```C++
int ledPin = 13;
char command;
```

This section declares an integer variable `ledPin` and assigns it the value of 13, which represents the digital pin on the Arduino board that the LED is connected to. It also declares a character variable `command`, which will store the command sent by the user via the serial monitor.

```C++
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
```

In the `setup()` function, we use the `Serial.begin()` function to initialize the serial communication with a baud rate of 9600. We also use the `pinMode()` function to set the digital pin connected to the LED as an output pin.

```C++
void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    if (command == '1') {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED ON");
    } else if (command == '0') {
      digitalWrite(ledPin, LOW);
      Serial.println("LED OFF");
    }
  }
}
```

In the `loop()` function, we use an `if` statement to check if there is any data available on the serial port. If there is, we read the data using the `Serial.read()` function and store it in the `command` variable.

We then use another `if` statement to check if the command sent by the user is '1', which means to turn the LED on. If it is, we set the digital pin connected to the LED to a HIGH state using the `digitalWrite()` function and print a message to the serial monitor indicating that the LED is on.

Similarly, if the command sent by the user is '0', we set the digital pin connected to the LED to a LOW state using the `digitalWrite()` function and print a message to the serial monitor indicating that the LED is off.

And that's it! The code continuously loops through these instructions, waiting for the user to send commands via the serial monitor to turn the LED on or off.

# Task 5 - 

Here is an Arduino code that controls the RGB LED 7 colors based on the input received from the serial monitor.

```C++
// Define the pins for the RGB LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  // Set the pins for the RGB LED as output pins
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Check if any data is available in the serial monitor
  if (Serial.available() > 0) {
    // Read the incoming data from the serial monitor
    char input = Serial.read();

    // Control the RGB LED based on the input received
    
    if (input == 'R') {
      // Turn on the red color
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);
    } 
    
    else if (input == 'G') {
      // Turn on the green color
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, LOW);
    } 
    
    else if (input == 'B') {
      // Turn on the blue color
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, HIGH);
    } 
    
    else if (input == 'Y') {
      // Turn on the yellow color
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, LOW);
    } 
    
    else if (input == 'M') {
      // Turn on the magenta color
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, HIGH);
    } 
    
    else if (input == 'C') {
      // Turn on the cyan color
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, HIGH);
    } 
    
    else if (input == 'W') {
      // Turn on the white color
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, HIGH);
    } 
    
    else {
      // Turn off the RGB LED
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);
    }
  }
}
```

In this code, the RGB LED is connected to pins 9, 10, and 11 on the Arduino board. The `setup()` function sets these pins as output pins and starts the serial communication at a baud rate of 9600. 

The `loop()` function checks if any data is available in the serial monitor using the `Serial.available()` function. If there is data available, it reads the incoming data using the `Serial.read()` function.

The code then uses if conditions to determine which color to turn on based on the input received. If the input is 'R', the code turns on the red color by setting the redPin to HIGH and the greenPin and bluePin to LOW. Similarly, if the input is 'G', it turns on the green color, and so on. If the input is not any of the valid color codes, it turns off the RGB LED.

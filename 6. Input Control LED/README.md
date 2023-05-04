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

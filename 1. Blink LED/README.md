# Arduino 1 - LED Blink

Here is a simple Arduino code for LED blinking:

```C++
int ledPin = 13;  // Define the LED pin number
void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
}
void loop() {
  digitalWrite(ledPin, HIGH);  // Turn on the LED
  delay(1000);  // Wait for one second
  digitalWrite(ledPin, LOW);  // Turn off the LED
  delay(1000);  // Wait for one second
}
```

Now let's explain each line of the code in detail:

```C++
int ledPin = 13;
```
In this line, we declare a variable named `ledPin` of the integer data type and assign the value of `13` to it. This is because the onboard LED on most Arduino boards is connected to digital pin 13.

```C++
void setup() {
  pinMode(ledPin, OUTPUT);
}
```
In the `setup()` function, we set the `ledPin` as an output pin using the `pinMode()` function. This function takes two arguments: the first is the pin number, and the second is the mode (input or output).

```C++
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
```
In the `loop()` function, we first turn on the LED by setting the `ledPin` to `HIGH` using the `digitalWrite()` function. We then use the `delay()` function to pause the program for one second before turning off the LED by setting the `ledPin` to `LOW` using `digitalWrite()`. We then use another `delay()` function to pause the program for another one second before repeating the process.

That's it! This code will continuously blink the LED connected to pin 13 on your Arduino board.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------


# Task 1 - Emergency Lights using RED and BLUE LED's

Here is an Arduino code for an emergency light using red and blue LEDs:

```C++
int redLedPin = 11;  // Define the red LED pin number
int blueLedPin = 12; // Define the blue LED pin number
void setup() {
  pinMode(redLedPin, OUTPUT);   // Set the red LED pin as output
  pinMode(blueLedPin, OUTPUT);  // Set the blue LED pin as output
}
void loop() {
  digitalWrite(redLedPin, HIGH);   // Turn on the red LED
  digitalWrite(blueLedPin, LOW);   // Turn off the blue LED
  delay(500);                      // Wait for half a second
  digitalWrite(redLedPin, LOW);    // Turn off the red LED
  digitalWrite(blueLedPin, HIGH);  // Turn on the blue LED
  delay(500);                      // Wait for half a second
}
```

Now let's explain each line of the code in detail:

```C++
int redLedPin = 11;
int blueLedPin = 12;
```
In these lines, we declare two variables named `redLedPin` and `blueLedPin` of the integer data type and assign the values of `11` and `12` to them, respectively. These values correspond to the digital pins to which the red and blue LEDs are connected.

```C++
void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}
```
In the `setup()` function, we set both `redLedPin` and `blueLedPin` as output pins using the `pinMode()` function. This function takes two arguments: the first is the pin number, and the second is the mode (input or output).

```C++
void loop() {
  digitalWrite(redLedPin, HIGH);
  digitalWrite(blueLedPin, LOW);
  delay(500);
  digitalWrite(redLedPin, LOW);
  digitalWrite(blueLedPin, HIGH);
  delay(500);
}
```
In the `loop()` function, we use the `digitalWrite()` function to turn on and off the LEDs in a specific sequence to create an emergency light effect. First, we turn on the red LED and turn off the blue LED using `digitalWrite()`. We then wait for half a second using the `delay()` function. We then turn off the red LED and turn on the blue LED, again using `digitalWrite()`, and wait for another half a second. This sequence is repeated continuously, creating an alternating flashing effect between the red and blue LEDs.

That's it! This code will continuously blink the red and blue LEDs in an emergency light pattern. You can adjust the delay time to change the speed of the flashing effect.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

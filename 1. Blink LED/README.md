

Sure, here is a simple Arduino code for LED blinking:

```c++
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

```
int ledPin = 13;
```
In this line, we declare a variable named `ledPin` of the integer data type and assign the value of `13` to it. This is because the onboard LED on most Arduino boards is connected to digital pin 13.

```
void setup() {
  pinMode(ledPin, OUTPUT);
}
```
In the `setup()` function, we set the `ledPin` as an output pin using the `pinMode()` function. This function takes two arguments: the first is the pin number, and the second is the mode (input or output).

```
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
```
In the `loop()` function, we first turn on the LED by setting the `ledPin` to `HIGH` using the `digitalWrite()` function. We then use the `delay()` function to pause the program for one second before turning off the LED by setting the `ledPin` to `LOW` using `digitalWrite()`. We then use another `delay()` function to pause the program for another one second before repeating the process.

That's it! This code will continuously blink the LED connected to pin 13 on your Arduino board.

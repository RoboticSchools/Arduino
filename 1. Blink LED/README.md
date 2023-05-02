# Arduino - 1. Blink LED

1. void setup(): This is the setup function, where we configure the initial settings for the Arduino board. In this code, we use the pinMode function to set the pin 13 as an output.

```python
void setup()
```

2. pinMode(13, OUTPUT): This function sets the specified pin as an output. In this case, we are using pin 13 as an output for the LED.

```python
pinMode(13, OUTPUT);
```

3. void loop(): This is the main loop of the code, where the program continuously runs until the board is powered off.

```python
void loop()
```

4. digitalWrite(13, HIGH): This function turns on the LED connected to pin 13. The HIGH value means that the pin is set to 5 volts, which is the same as turning on the LED.

```python
digitalWrite(13, HIGH);
```

5. delay(1000): This function causes the program to wait for 1000 milliseconds (1 second).

```python
delay(1000);
```

6. digitalWrite(13, LOW): This function turns off the LED connected to pin 13. The LOW value means that the pin is set to 0 volts, which is the same as turning off the LED.

```python
digitalWrite(13, LOW);
```

7. The code then repeats the process, turning the LED on and off continuously with 1 second delays in between each change.
8. And the final code should look like this.
```python
void setup() {
  pinMode(13, OUTPUT); // set pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH); // turn on the LED
  delay(1000); // wait for 1 second
  digitalWrite(13, LOW); // turn off the LED
  delay(1000); // wait for 1 second
}
```

Sure, here is a basic Arduino code for blinking an LED with line-by-line explanation:

```python
// Define the pin number that the LED is connected to
int ledPin = 13;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  // Wait for 1 second
  delay(1000);
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  // Wait for 1 second
  delay(1000);
}
```

Explanation:

1. `// Define the pin number that the LED is connected to`
   This line is a comment, which is ignored by the compiler. It explains that the next line defines the pin number that the LED is connected to.

2. `int ledPin = 13;`
   This line defines a variable `ledPin` as an integer and assigns it the value 13. This means that the LED is connected to pin 13 on the Arduino board.

3. `void setup() {`
   This line starts the `setup()` function. This function is called once when the Arduino board is powered on or reset.

4. `pinMode(ledPin, OUTPUT);`
   This line sets the `ledPin` as an output pin. This means that the Arduino can send voltage to the pin to turn the LED on and off.

5. `}`
   This line ends the `setup()` function.

6. `void loop() {`
   This line starts the `loop()` function. This function runs repeatedly until the Arduino is powered off or reset.

7. `digitalWrite(ledPin, HIGH);`
   This line turns the LED on by setting the voltage on `ledPin` to high.

8. `delay(1000);`
   This line pauses the program for 1 second (1000 milliseconds).

9. `digitalWrite(ledPin, LOW);`
   This line turns the LED off by setting the voltage on `ledPin` to low.

10. `delay(1000);`
    This line pauses the program for 1 second (1000 milliseconds).

11. `}`
    This line ends the `loop()` function.

This code will make the LED connected to pin 13 on the Arduino board blink on and off once per second.

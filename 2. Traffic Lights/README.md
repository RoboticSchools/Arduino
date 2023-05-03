# Arduino 2 - Traffic Lights

Here's an Arduino code for a traffic lights project using red, green, and yellow LEDs:

```C++
int redLedPin = 11;    // Define the red LED pin number
int yellowLedPin = 10; // Define the yellow LED pin number
int greenLedPin = 9;   // Define the green LED pin number

void setup() {
  pinMode(redLedPin, OUTPUT);     // Set the red LED pin as output
  pinMode(yellowLedPin, OUTPUT);  // Set the yellow LED pin as output
  pinMode(greenLedPin, OUTPUT);   // Set the green LED pin as output
}

void loop() {
  // Red light on, green and yellow off
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, LOW);
  delay(5000);

  // Red and yellow light on, green off
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  delay(2000);

  // Green light on, red and yellow off
  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, HIGH);
  delay(5000);

  // Yellow light on, red and green off
  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  delay(2000);
}
```

Now let's explain each line of the code in detail:

```C++
int redLedPin = 11;
int yellowLedPin = 10;
int greenLedPin = 9;
```
In these lines, we declare three variables named `redLedPin`, `yellowLedPin`, and `greenLedPin` of the integer data type and assign the values of `11`, `10`, and `9` to them, respectively. These values correspond to the digital pins to which the red, yellow, and green LEDs are connected.

```C++
void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
}
```
In the `setup()` function, we set all three pins as output pins using the `pinMode()` function.

```C++
void loop() {
  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, LOW);
  delay(5000);

  digitalWrite(redLedPin, HIGH);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  delay(2000);

  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, HIGH);
  delay(5000);

  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  delay(2000);
}
```
In the `loop()` function, we use the `digitalWrite()` function to turn on and off the LEDs in a specific sequence to simulate a traffic light. The code is divided into four parts, each representing a specific traffic light state:

1. The first part turns on the red LED, and turns off the yellow and green LEDs. The traffic light stays in this state for five seconds, as specified by the `delay()` function.
2. The second part turns on the red and yellow LEDs, and turns off the green LED. The traffic light stays in this state for two seconds.
3. The third part turns on the green LED and turns off the red and yellow LEDs. The traffic light stays in this state for five seconds.

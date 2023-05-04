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
The `loop()` function is called repeatedly while the program is running. Here, we turn the motor clockwise (forward) by setting `motorPin1` to `HIGH` and `motorPin2` to `LOW` for 2 seconds using the `

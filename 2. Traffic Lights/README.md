# Arduino - 2. Traffic Lights

1. ***int redPin = 9;*** : This line declares the red pin as a constant integer variable and sets it to 9.

```python
int redPin = 9;
```

2. ***int yellowPin = 10;*** : This line declares the yellow pin as a constant integer variable and sets it to 10.

```python
int yellowPin = 10;
```

3. ***int greenPin = 11;*** : This line declares the green pin as a constant integer variable and sets it to 11.

```python
int greenPin = 11;
```

4. ***void setup():*** This is the setup function, where we configure the initial settings for the Arduino board. In this code, we use the pinMode function to set the red, yellow, and green pins as outputs.

```python
void setup()
```

5. ***pinMode(redPin, OUTPUT):*** This function sets the specified red pin as an output.

```python
pinMode(redPin, OUTPUT);
```

6. ***pinMode(yellowPin, OUTPUT):*** This function sets the specified yellow pin as an output.

```python
pinMode(yellowPin, OUTPUT);
```

7. ***pinMode(greenPin, OUTPUT):*** This function sets the specified green pin as an output.

```python
pinMode(greenPin, OUTPUT);
```

8. ***void loop():*** This is the main loop of the code, where the program continuously runs until the board is powered off.

```python
void loop()
```

9. ***digitalWrite(redPin, HIGH):*** This function turns on the red LED connected to the red pin.
***delay(3000):*** This function causes the program to wait for 3000 milliseconds (3 seconds).
***digitalWrite(redPin, LOW):*** This function turns off the red LED connected to the red pin.

```python
digitalWrite(redPin, HIGH);
delay(3000);
digitalWrite(redPin, LOW);
```

10.***digitalWrite(greenPin, HIGH):*** This function turns on the green LED connected to the green pin.
***delay(3000):*** This function causes the program to wait for 3000 milliseconds (3 seconds).
***digitalWrite(greenPin, LOW):*** This function turns off the green LED connected to the green pin.

```python
digitalWrite(greenPin, HIGH);
delay(3000);
digitalWrite(greenPin, LOW);
```

11. ***digitalWrite(yellowPin, HIGH):*** This function turns on the yellow LED connected to the yellow pin.
***delay(1000):*** This function causes the program to wait for 1000 milliseconds (1 second).
***digitalWrite(yellowPin, LOW):*** This function turns off the yellow LED connected to the yellow pin.

```python
digitalWrite(yellowPin, HIGH);
delay(1000);
digitalWrite(yellowPin, LOW);
```

12. And that's it! This simple code will cause the red, yellow, and green LEDs to turn on and off in a cycle, mimicking a traffic light. 
The red light will turn on for 3 seconds, the green light will turn on for 3 seconds, and the yellow light will turn on for 1 second, before the cycle repeats.

```python
int redPin = 9;
int yellowPin = 10;
int greenPin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Red light on
  digitalWrite(redPin, HIGH);
  delay(3000);
  digitalWrite(redPin, LOW);

  // Green light on
  digitalWrite(greenPin, HIGH);
  delay(3000);
  digitalWrite(greenPin, LOW);

  // Yellow light on
  digitalWrite(yellowPin, HIGH);
  delay(1000);
  digitalWrite(yellowPin, LOW);
}

```

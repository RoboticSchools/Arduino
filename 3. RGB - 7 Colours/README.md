# Arduino 3 - RGB LED 3 Colours

Here's an Arduino code for an RGB LED with three colors

```
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(1000);
  
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);
  
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);
}
```

Let's go through each line of the code and see what it does:

```
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
```

This section declares three integer variables `redPin`, `greenPin`, and `bluePin` and assigns them the values 9, 10, and 11, respectively. These values represent the digital pins on the Arduino board that the red, green, and blue LED pins are connected to.

```
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
```

In the `setup()` function, we use the `pinMode()` function to set the digital pins connected to the red, green, and blue LED pins as output pins.

```
void loop() {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(1000);
  
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);
  
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);
}
```

In the `loop()` function, we use `digitalWrite()` to turn on and off the different combinations of the RGB LED to create the three different colors. Here's what each section of the code does:

- `digitalWrite(redPin, HIGH); digitalWrite(greenPin, LOW); digitalWrite(bluePin, LOW); delay(1000);`: This section turns on the red LED by setting the red pin to HIGH and the green and blue pins to LOW. It then waits for one second using the `delay()` function before moving on to the next section of code.

- `digitalWrite(redPin, LOW); digitalWrite(greenPin, HIGH); digitalWrite(bluePin, LOW); delay(1000);`: This section turns on the green LED by setting the green pin to HIGH and the red and blue pins to LOW. It then waits for one second using the `delay()` function before moving on to the next section of code.

- `digitalWrite(redPin, LOW); digitalWrite(greenPin, LOW); digitalWrite(bluePin, HIGH); delay(1000);`: This section turns on the blue LED by setting the blue pin to HIGH and the red and green pins to LOW. It then waits for one second using the `delay()` function before moving back to the start of the loop and repeating the process.

And that's it! The code continuously loops through these three sections, creating the three different colors for the RGB LED.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Task 2 - RGB LED 7 Colours 

Here's an Arduino code for an RGB LED with 7 different colors

```C++
int redPin = 11;   // Red pin of RGB LED connected to digital pin 11
int greenPin = 10; // Green pin of RGB LED connected to digital pin 10
int bluePin = 9;   // Blue pin of RGB LED connected to digital pin 9

void setup() {
  pinMode(redPin, OUTPUT);   // Set red pin as output
  pinMode(greenPin, OUTPUT); // Set green pin as output
  pinMode(bluePin, OUTPUT);  // Set blue pin as output
}

void loop() {
  // Red color
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(1000);

  // Green color
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);

  // Blue color
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);

  // Yellow color
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);

  // Magenta color
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);

  // Cyan color
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(1000);

  // White color
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(1000);
}
```

Now, let's go through each line of the code:

```C++
int redPin = 11;
int greenPin = 10;
int bluePin = 9;
```
In these lines, we define three integer variables named `redPin`, `greenPin`, and `bluePin` and assign the values `11`, `10`, and `9` respectively. These values correspond to the digital pins to which the red, green, and blue leads of the RGB LED are connected.

```C++
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
```
In the `setup()` function, we set the digital pins connected to the RGB LED as output pins using the `pinMode()` function.

```C++
void loop() {

  // Red color
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(1000);
  
  // Green color
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);
  
  // Blue color
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);
  
  // Yellow color
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);
  
  // Magenta color
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);
  
  // Cyan color
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(1000);
  
  // White color
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(1000);
}
```
In the `loop()` function, we turn on and off the different combinations of the RGB LED to create the seven different colors. Here's what each section of the code does:

- `digitalWrite(redPin, HIGH); digitalWrite(greenPin, LOW); digitalWrite(bluePin, LOW); delay(1000);`: This section turns on the `red LED` by setting the red pin to HIGH and the green and blue pins to LOW. It then waits for one second using the `delay()` function before moving on to the next section of code.

- `digitalWrite(redPin, LOW); digitalWrite(greenPin, HIGH); digitalWrite(bluePin, LOW); delay(1000);`: This section turns on the `green LED` by setting the green pin to HIGH and the red and blue pins to LOW. It then waits for one second using the `delay()` function before moving on to the next section of code.

- `digitalWrite(redPin, LOW); digitalWrite(greenPin, LOW); digitalWrite(bluePin, HIGH); delay(1000);`: This section turns on the `blue LED` by setting the blue pin to HIGH and the red and green pins to LOW. It then waits for one second using the `delay()` function before moving on to the next section of code.

- `digitalWrite(redPin, HIGH); digitalWrite(greenPin, HIGH); digitalWrite(bluePin, LOW); delay(1000);`: This section turns on both the `red and green LEDs` by setting the red and green pins to HIGH and the blue pin to LOW. It then waits for one second using the `delay()` function before moving on to the next section of code.

- `digitalWrite(redPin, HIGH); digitalWrite(greenPin, LOW); digitalWrite(bluePin, HIGH); delay(1000);`: This section turns on both the `red and blue LEDs` by setting the red and blue pins to HIGH and the green pin to LOW. It then waits for one second using the `delay()` function before moving on to the next section of code.

- `digitalWrite(redPin, LOW); digitalWrite(greenPin, HIGH); digitalWrite(bluePin, HIGH); delay(1000);`: This section turns on both the `green and blue LEDs` by setting the green and blue pins to HIGH and the red pin to LOW. It then waits for one second using the `delay()` function before moving on to the next section of code.

- `digitalWrite(redPin, HIGH); digitalWrite(greenPin, HIGH); digitalWrite(bluePin, HIGH); delay(1000);`: This section turns on all `three LEDs` to create `white color` by setting all three pins to HIGH. It then waits for one second using the `delay()` function before moving back to the start of the loop and repeating the process.

And that's it! The code continuously loops through these seven sections, creating the seven different colors for the RGB LED.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

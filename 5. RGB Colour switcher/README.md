# Arduino 5 - RGB Colour switcher

Here is an Arduino code for RGB random colour switcher using a push button:

```C++
const int buttonPin = 2;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    redValue = random(255);
    greenValue = random(255);
    blueValue = random(255);
    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);
    delay(500);
  }
}
```

Let's go through each line of the code and see what it does:

```C++
const int buttonPin = 2;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
```

This section declares four integer constants `buttonPin`, `redPin`, `greenPin`, and `bluePin` and assigns them the values 2, 9, 10, and 11, respectively. These values represent the digital pins on the Arduino board that the pushbutton and the three pins of the RGB LED are connected to.

```C++
int redValue = 0;
int greenValue = 0;
int blueValue = 0;
```

These three integer variables will store the current values for the intensity of the red, green, and blue channels of the RGB LED.

```C++
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  randomSeed(analogRead(0));
}
```

In the `setup()` function, we use the `pinMode()` function to set the digital pins connected to the pushbutton and the three pins of the RGB LED. We also use the `randomSeed()` function to seed the random number generator with a random value based on the analog value of pin 0.

```C++
void loop() {
  if (digitalRead(buttonPin) == LOW) {
    redValue = random(255);
    greenValue = random(255);
    blueValue = random(255);
    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);
    delay(500);
  }
}
```

In the `loop()` function, we use an `if` statement to check if the pushbutton is pressed. If it is, we generate a random value between 0 and 255 for each of the red, green, and blue channels using the `random()` function. We then set the intensity of each channel using the `analogWrite()` function. The `delay()` function is used to add a pause of 500 milliseconds between each change of color.

And that's it! The code continuously loops through these instructions, waiting for the pushbutton to be pressed and then randomly generating a new color for the RGB LED.

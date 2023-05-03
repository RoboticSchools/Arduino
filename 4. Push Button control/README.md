# Arduino 4 - Push Button Control LED

Here's an Arduino code for a pushbutton-controlled LED

```C++
const int buttonPin = 2;
const int ledPin = 9;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
```

Let's go through each line of the code and see what it does:

```C++
const int buttonPin = 2;
const int ledPin = 9;
```

This section declares two integer constants `buttonPin` and `ledPin` and assigns them the values 2 and 9, respectively. These values represent the digital pins on the Arduino board that the pushbutton and the LED pins are connected to.

```C++
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}
```

In the `setup()` function, we use the `pinMode()` function to set the digital pin connected to the pushbutton as an input pin with a built-in pull-up resistor using the `INPUT_PULLUP` argument. We also set the digital pin connected to the LED as an output pin.

```C++
void loop() {
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
```

In the `loop()` function, we use the `digitalRead()` function to read the state of the pushbutton. The function returns `LOW` if the button is pressed and `HIGH` if it is not pressed. We store this value in the integer variable `buttonState`.

We then use an `if` statement to check if `buttonState` is equal to `LOW`. If it is, we turn on the LED by setting the LED pin to `HIGH` using `digitalWrite()`. If `buttonState` is not equal to `LOW`, we turn off the LED by setting the LED pin to `LOW` using `digitalWrite()`.

And that's it! The code continuously loops through these instructions, reading the state of the pushbutton and turning the LED on or off based on the state.


# Task 3 - ON OFF LED Control using Push Buttons

Here is an Arduino code for 2 pushbuttons to control an LED

```C++
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin = 9;

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  
  if (buttonState1 == LOW) {
    digitalWrite(ledPin, HIGH);
  } else if (buttonState2 == LOW) {
    digitalWrite(ledPin, LOW);
  }
}
```

Let's go through each line of the code and see what it does:

```C++
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin = 9;
```

This section declares three integer constants `buttonPin1`, `buttonPin2`, and `ledPin` and assigns them the values 2, 3, and 9, respectively. These values represent the digital pins on the Arduino board that the two pushbuttons and the LED are connected to.

```C++
void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}
```

In the `setup()` function, we use the `pinMode()` function to set the digital pins connected to the two pushbuttons as input pins with built-in pull-up resistors using the `INPUT_PULLUP` argument. We also set the digital pin connected to the LED as an output pin.

```C++
void loop() {
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  
  if (buttonState1 == LOW) {
    digitalWrite(ledPin, HIGH);
  } else if (buttonState2 == LOW) {
    digitalWrite(ledPin, LOW);
  }
}
```

In the `loop()` function, we use the `digitalRead()` function to read the state of the two pushbuttons. The function returns `LOW` if a button is pressed and `HIGH` if it is not pressed. We store these values in the integer variables `buttonState1` and `buttonState2`.

We then use an `if` statement to check if `buttonState1` is equal to `LOW`. If it is, we turn on the LED by setting the LED pin to `HIGH` using `digitalWrite()`. If `buttonState2` is equal to `LOW`, we turn off the LED by setting the LED pin to `LOW` using `digitalWrite()`. Note that we use an `else if` statement to check the state of the second button only if the first button is not pressed.

And that's it! The code continuously loops through these instructions, reading the state of the two pushbuttons and turning the LED on or off based on which button is pressed.

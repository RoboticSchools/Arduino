

Here's an Arduino code for a piano project using 4 pushbuttons and `INPUT_PULLUP`:

```C++
int buttonPin1 = 2;  // assign pushbutton 1 to digital pin 2
int buttonPin2 = 3;  // assign pushbutton 2 to digital pin 3
int buttonPin3 = 4;  // assign pushbutton 3 to digital pin 4
int buttonPin4 = 5;  // assign pushbutton 4 to digital pin 5

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);  // set pushbutton 1 as input with internal pull-up resistor enabled
  pinMode(buttonPin2, INPUT_PULLUP);  // set pushbutton 2 as input with internal pull-up resistor enabled
  pinMode(buttonPin3, INPUT_PULLUP);  // set pushbutton 3 as input with internal pull-up resistor enabled
  pinMode(buttonPin4, INPUT_PULLUP);  // set pushbutton 4 as input with internal pull-up resistor enabled
}

void loop() {
  if (digitalRead(buttonPin1) == LOW) {  // if pushbutton 1 is pressed
    tone(8, 262, 100);  // play note C4 on pin 8 for 100ms
    delay(100);  // wait for 100ms
  }
  if (digitalRead(buttonPin2) == LOW) {  // if pushbutton 2 is pressed
    tone(8, 294, 100);  // play note D4 on pin 8 for 100ms
    delay(100);  // wait for 100ms
  }
  if (digitalRead(buttonPin3) == LOW) {  // if pushbutton 3 is pressed
    tone(8, 330, 100);  // play note E4 on pin 8 for 100ms
    delay(100);  // wait for 100ms
  }
  if (digitalRead(buttonPin4) == LOW) {  // if pushbutton 4 is pressed
    tone(8, 349, 100);  // play note F4 on pin 8 for 100ms
    delay(100);  // wait for 100ms
  }
}
```

Explanation of the code line by line:

```C++
int buttonPin1 = 2;  // assign pushbutton 1 to digital pin 2
int buttonPin2 = 3;  // assign pushbutton 2 to digital pin 3
int buttonPin3 = 4;  // assign pushbutton 3 to digital pin 4
int buttonPin4 = 5;  // assign pushbutton 4 to digital pin 5
```

These lines define the pin numbers for the four pushbuttons, which are connected to digital pins 2, 3, 4, and 5 respectively.

```C++
void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);  // set pushbutton 1 as input with internal pull-up resistor enabled
  pinMode(buttonPin2, INPUT_PULLUP);  // set pushbutton 2 as input with internal pull-up resistor enabled
  pinMode(buttonPin3, INPUT_PULLUP);  // set pushbutton 3 as input with internal pull-up resistor enabled
  pinMode(buttonPin4, INPUT_PULLUP);  // set pushbutton 4 as input with internal pull-up resistor enabled
}
```

The `setup()` function is called only once at the beginning of the program. Here, we set the pins connected to the pushbuttons as inputs with the internal pull-up resistors enabled. This means that when the pushbuttons are not being pressed, the pins will read HIGH, and when they are pressed, they will read LOW.

```C++
void loop() {
  if (digitalRead(buttonPin1) == LOW) {  // if pushbutton 1 is pressed
    tone(8, 262, 100);  // play note C4 on pin 8 for 100ms
    delay(100);  // wait for 100ms
  }
  if (digitalRead(buttonPin2) == LOW) {  // if pushbutton 2 is pressed
    tone(8, 294, 100);  // play note D4 on pin 8 for 100ms
    delay(100);  // wait for 100ms
  }
  if (digitalRead(buttonPin3) == LOW) {  // if pushbutton 3 is pressed
    tone(8, 330, 100);  // play note E4 on pin 8 for 100ms
    delay(100);  // wait for 100ms
  }
  if (digitalRead(buttonPin4) == LOW) {  // if pushbutton 4 is pressed
    tone(8, 349, 100);  // play note F4 on pin 8 for 100ms
    delay(100);  // wait for 100ms
  }
}
```

The `loop()` function is called repeatedly after the `setup()` function. Here, we use `digitalRead()` to read the state of each pushbutton pin. If a pushbutton is pressed (i.e. its pin is reading LOW), we use the `tone()` function to play a corresponding note for 100 milliseconds on pin 8 (which is connected to a speaker or buzzer). After each note is played, we wait for 100 milliseconds using the `delay()` function.

So this code will play different notes when different pushbuttons are pressed. You can modify the note frequencies and durations in the `tone()` function as per your requirement.

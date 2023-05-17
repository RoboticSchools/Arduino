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

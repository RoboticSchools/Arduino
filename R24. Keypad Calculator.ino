#include <Adafruit_LiquidCrystal.h>
#include <Wire.h>
#include <Keypad.h>

Adafruit_LiquidCrystal lcd(0);

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', '*'},
  {'c', '0', '=', '/'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

String inputString = "";
float result = 0;
char operation = 0;

void setup() {
  lcd.begin(16,2);
  lcd.clear();
}
void loop() {
  char key = keypad.getKey();
  if (key) {
    if (key >= '0' && key <= '9') {
      inputString += key;
      lcd.print(key);
    } else if (key == '+' || key == '-' || key == '*' || key == '/') {
      calculate();
      operation = key;
      lcd.print(key);
    } else if (key == '=') {
      calculate();
      lcd.print(key);
      lcd.print(result);
    } else if (key == 'c') {
      inputString = "";
      result = 0;
      operation = 0;
      lcd.clear();
    } 
  }
}

void calculate() {
  float input = inputString.toFloat();
  inputString = "";
  if (operation == '+') {
    result += input;
  } else if (operation == '-') {
    result -= input;
  } else if (operation == '*') {
    result *= input;
  } else if (operation == '/') {
    result /= input;
  } else {
    result = input;
  }
}

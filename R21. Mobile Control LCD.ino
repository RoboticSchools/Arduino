/// ADD THIS LIBRARY ---->  https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library

#include<SoftwareSerial.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

SoftwareSerial blue(2,3);

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	lcd.begin();
  blue.begin(9600);
	lcd.clear();
}

void loop()
{
  if(blue.available()>0)
  {
    String msg = blue.readString();
    lcd.setCursor(0,0);
    lcd.clear();
    lcd.print(msg);
  }  
}

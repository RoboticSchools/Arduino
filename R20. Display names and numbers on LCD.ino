// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int Numbers = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);

  Numbers = 0;
  lcd_1.setCursor(0, 0);
  lcd_1.print("Hello ...");
  delay(1000); // Wait for 1000 millisecond(s)
  lcd_1.setCursor(0, 1);
  lcd_1.print("RoboticSchools");
  delay(1000); // Wait for 1000 millisecond(s)
  lcd_1.clear();
}

void loop()
{
  Numbers += 1;
  lcd_1.setCursor(0, 0);
  lcd_1.print(Numbers);
  delay(1000); // Wait for 1000 millisecond(s)
}

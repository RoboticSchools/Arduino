```C++
#include <Servo.h>

Servo myservo;  // Create a servo object

void setup() {
  myservo.attach(9);  // Attaches the servo to pin 9
}

void loop() {
  for (int pos = 0; pos <= 180; pos += 1) {  // Sweep from 0 to 180 degrees
    myservo.write(pos);                     // Set the servo position
    delay(15);                              // Delay for smoother motion
  }
  
  for (int pos = 180; pos >= 0; pos -= 1) {  // Sweep from 180 to 0 degrees
    myservo.write(pos);                     // Set the servo position
    delay(15);                              // Delay for smoother motion
  }
}
```

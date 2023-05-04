# Arduino 9 - Rotate the DC Motor

Here is an Arduino code to rotate a DC motor :

```C++
#include <AFMotor.h> // Include the AFMotor library

AF_DCMotor motor(1); // Create a DC motor object with motor number 1

void setup() {
  motor.setSpeed(255); // Set the motor speed to the maximum (255)
}

void loop() {
  motor.run(FORWARD); // Rotate the motor forward
  delay(1000); // Wait for 1 second
  motor.run(BACKWARD); // Rotate the motor backward
  delay(1000); // Wait for 1 second
}
```

Explanation:

```C++
#include <AFMotor.h> // Include the AFMotor library
```

The first line of code includes the AFMotor library which provides the necessary functions to control the DC motor.

```C++
AF_DCMotor motor(1); // Create a DC motor object with motor number 1
```

The next line creates an instance of the AF_DCMotor class with the motor number 1. This class provides methods to control the DC motor connected to the specific motor number.

```C++
void setup() {
  motor.setSpeed(255); // Set the motor speed to the maximum (255)
}
```

The setup() function is called once at the beginning of the program. Sets the motor speed to its maximum value of 255 using the setSpeed() method.

```C++
void loop() {
  motor.run(FORWARD); // Rotate the motor forward
  delay(1000); // Wait for 1 second
  motor.run(BACKWARD); // Rotate the motor backward
  delay(1000); // Wait for 1 second
}
```

The `loop()` function is called repeatedly after the setup() function. It first rotates the motor `forward` using the `run()` method with the FORWARD direction constant, and then waits for 1 second using the `delay()` function. It then rotates the motor `backward` using the `run()` method with the BACKWARD direction constant and waits for 1 second again. This loop continues indefinitely, causing the motor to rotate back and forth continuously.

Overall, this code uses the AFMotor library to control the direction and speed of a DC motor connected to the Arduino.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Arduino 9 - Move the Robot Car - 4 Wheel Drive

```C++
#include <AFMotor.h> // include the AF_Motor library

AF_DCMotor R1(2); // create motor object for right wheel 1 and connected to Motorshield M2
AF_DCMotor R2(1); // create motor object for right wheel 2 and connected to Motorshield M1
AF_DCMotor L1(3); // create motor object for left wheel 1 and connected to Motorshield M3
AF_DCMotor L2(4); // create motor object for left wheel 2 and connected to Motorshield M4

void setup() {
  // set the motor speed and start the serial communication
  R1.setSpeed(255); // set the speed for right wheel 1
  R2.setSpeed(255); // set the speed for right wheel 2
  L1.setSpeed(255); // set the speed for left wheel 1
  L2.setSpeed(255); // set the speed for left wheel 2
  Serial.begin(9600); // start the serial communication
}

void loop() {
  // move the robot in four directions and print the direction to the serial monitor
  R1.run(FORWARD); // move right wheel 1 forward
  R2.run(FORWARD); // move right wheel 2 forward
  L1.run(FORWARD); // move left wheel 1 forward
  L2.run(FORWARD); // move left wheel 2 forward
  Serial.println("Robot moves forward"); // print the direction to the serial monitor
  delay(2000); // wait for 2 seconds
  
  R1.run(BACKWARD); // move right wheel 1 backward
  R2.run(BACKWARD); // move right wheel 2 backward
  L1.run(BACKWARD); // move left wheel 1 backward
  L2.run(BACKWARD); // move left wheel 2 backward
  Serial.println("Robot moves backward"); // print the direction to the serial monitor
  delay(2000); // wait for 2 seconds
  
  R1.run(FORWARD); // move right wheel 1 forward
  R2.run(FORWARD); // move right wheel 2 forward
  L1.run(BACKWARD); // move left wheel 1 backward
  L2.run(BACKWARD); // move left wheel 2 backward
  Serial.println("Robot turns left"); // print the direction to the serial monitor
  delay(2000); // wait for 2 seconds
  
  R1.run(BACKWARD); // move right wheel 1 backward
  R2.run(BACKWARD); // move right wheel 2 backward
  L1.run(FORWARD); // move left wheel 1 forward
  L2.run(FORWARD); // move left wheel 2 forward
  Serial.println("Robot turns right"); // print the direction to the serial monitor
  delay(2000); // wait for 2 seconds
}
```

In this code, we first include the AF_Motor library, which provides us with the functions we need to control the motors. We then create four motor objects for the four wheels of the robot car and assign them to their respective pins. In the `setup()` function, we set the speed for each motor and start the serial communication.

In the `loop()` function, we move the robot in four directions - forward, backward, left, and right - using the `run()` function of each motor object. We also print the direction to the serial monitor using the `println()` function.

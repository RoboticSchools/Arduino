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

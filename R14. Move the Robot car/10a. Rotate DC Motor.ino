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
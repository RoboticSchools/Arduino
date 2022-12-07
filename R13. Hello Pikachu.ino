// www.roboticschools.com

#include <Servo.h>

Servo motor;
int triggerPin = 7;
int echoPin = 8;

void setup()
{
  motor.attach(3, 500, 2500);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop()
{
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  long duration =  pulseIn(echoPin, HIGH);
  int distance = 0.0343 * duration/2;
  
  if (distance < 20) 
  {
    motor.write(150);
  } 
  else 
  {
    motor.write(0);
  }
  delay(10); // Delay a little bit to improve simulation performance
}

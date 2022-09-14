// www.roboticschools.com

#include <Servo.h>

int ultrasonic = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

Servo servo_3;

void setup()
{
  servo_3.attach(3, 500, 2500);
  pinMode(12, OUTPUT);
}

void loop()
{
  ultrasonic = 0.01723 * readUltrasonicDistance(9, 8);
  if (ultrasonic < 20) {
    servo_3.write(150);
    tone(12, 523, 1000); // play tone 60 (C5 = 523 Hz)
  } else {
    servo_3.write(0);
    noTone(12);
  }
  delay(10); // Delay a little bit to improve simulation performance
}

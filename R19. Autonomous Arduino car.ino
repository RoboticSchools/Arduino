#include <AFMotor.h>

#define echopin A5 // echo pin  --- Change these two numbers to respective numbers those are connected in Arduino.
#define trigpin A4 // Trigger pin

 

AF_DCMotor motorR1(2); // RightHand Side - Front Motor
AF_DCMotor motorR2(3); // LeftHand Side - Front Motor
AF_DCMotor motorL1(1); // RightHand Side - Back Motor
AF_DCMotor motorL2(4); // LeftHand Side - Back Motor


int distance;
long duration;

int set = 15;   // distance between Object and Ultrasonic sensor to Respond.
 
void setup() {
  Serial.begin(9600);           // Initialize serial port
  Serial.println("Start");

  pinMode (trigpin, OUTPUT);
  pinMode (echopin, INPUT );
  
  motorR1.setSpeed(150);          // set the motor speed to 0-255
  motorR2.setSpeed(150);
  motorL1.setSpeed(150);          
  motorL2.setSpeed(150);

}

void loop() {
 distance = data();
 Serial.print("S=");
 Serial.println(distance);
  if (distance > set){
    Serial.println("Forward");
    motorR1.run(FORWARD);        
    motorR2.run(FORWARD);
    motorL1.run(FORWARD);         
    motorL2.run(FORWARD); 
    }
  else{
     motorR1.run(BACKWARD);   
     motorR2.run(BACKWARD);
     motorL1.run(BACKWARD);   
     motorL2.run(BACKWARD); 
     delay(600);
     motorR1.run(BACKWARD);   
     motorR2.run(FORWARD);
     motorL1.run(BACKWARD);   
     motorL2.run(FORWARD);
     delay(1000); 
   }
}


long data(){
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
 digitalWrite(trigpin, LOW);
 
  duration = pulseIn (echopin, HIGH);
  return 0.0343*duration/2;
}

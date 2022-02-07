#include <AFMotor.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

AF_DCMotor motor1(2) 
AF_DCMotor motor2(3)
AF_DCMotor motor3(1)
AF_DCMotor motor4(4)

int state;
int Speed = 130; 

void setup() { 
  
// set the motor speed to 0-255
motor1.setSpeed(Speed);
motor2.setSpeed(Speed);
motor3.setSpeed(Speed); 
motor4.setSpeed(Speed);
  
mySerial.begin(9600);

}

void loop(){ 
  
if(mySerial.available() > 0)
{ 
  //if some date is sent, reads it and saves in state     
  state = mySerial.read();  
  
if(state == 1)
{
  motor1.run(FORWARD); 
  motor2.run(FORWARD);
  motor3.run(FORWARD); 
  motor4.run(FORWARD);
}       
else if(state == 2)
{
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}  
else if(state == 3)
{
  motor1.run(BACKWARD); 
  motor2.run(FORWARD); 
  motor3.run(BACKWARD); 
  motor4.run(FORWARD); 
}  
else if(state == 4)
{
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD); 
}
else:
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE); 
}


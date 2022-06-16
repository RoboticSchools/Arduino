#include <AFMotor.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);

AF_DCMotor motorR1(2);  // RightHand Side - Front Motor
AF_DCMotor motorR2(3);  // LeftHand Side - Front Motor
AF_DCMotor motorL1(1);  // RightHand Side - Back Motor
AF_DCMotor motorL2(4);  // LeftHand Side - Back Motor

int Speed = 180; 

void setup() 
{ 
motorR1.setSpeed(Speed);
motorR2.setSpeed(Speed);
motorL1.setSpeed(Speed); 
motorL2.setSpeed(Speed);
  
mySerial.begin(9600);
  
}

void loop(){ 
  
if(mySerial.available() > 0)
{ 
  data = mySerial.read();      

  if(data > 10)
  {
    Speed = data;
    motorR1.setSpeed(Speed);
    motorR2.setSpeed(Speed);
    motorL1.setSpeed(Speed); 
    motorL2.setSpeed(Speed);    
  }
  
}
//===============================================================================
//                            USING ARROWS
//=============================================================================== 
  
if(data == 1){forward(); }       // if the data is '1' the DC motor will go forward
else if(data == 2){backward();}  // if the data is '2' the motor will Reverse
else if(data == 3){turnLeft();}  // if the data is '3' the motor will turn left
else if(data == 4){turnRight();} // if the data is '4' the motor will turn right
else if(data == 5){Stop(); }     // if the data is '5' the motor will Stop
  

//===============================================================================
//                             VOICE CONTROL
//===============================================================================

else if(data == 6){turnLeft();  delay(400);  data = 5;}
else if(data == 7){turnRight(); delay(400);  data = 5;}
delay(80);   
  
}

void forward()
{
  motorR1.run(FORWARD);
  motorR2.run(FORWARD);   
  motorL1.run(FORWARD);
  motorL2.run(FORWARD);
}

void backward()
{
  motorR1.run(BACKWARD);
  motorR2.run(BACKWARD);   
  motorL1.run(BACKWARD);
  motorL2.run(BACKWARD);
}
void turnLeft()
{
  motorR1.run(FORWARD);
  motorR2.run(FORWARD);
  motorL1.run(BACKWARD);   
  motorL2.run(BACKWARD); 
}

void turnRight()
{
  motorR1.run(BACKWARD);
  motorR2.run(BACKWARD);
  motorL1.run(FORWARD);   
  motorL2.run(FORWARD); 
}
void Stop()
{
  motorR1.run(RELEASE);
  motorR2.run(RELEASE);  
  motorL1.run(RELEASE);
  motorL2.run(RELEASE);
}

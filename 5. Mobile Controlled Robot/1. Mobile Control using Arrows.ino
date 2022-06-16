#include <AFMotor.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);

AF_DCMotor motorR1(2) 
AF_DCMotor motorR2(3)
AF_DCMotor motorL1(1)
AF_DCMotor motorL2(4)

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
  int data = mySerial.read();  
  
if(data == 1)
{
  motorR1.run(FORWARD);
  motorR2.run(FORWARD);   
  motorL1.run(FORWARD);
  motorL2.run(FORWARD);
}       
else if(data == 2)
{
  motorR1.run(BACKWARD);
  motorR2.run(BACKWARD);   
  motorL1.run(BACKWARD);
  motorL2.run(BACKWARD);
}  
else if(data == 3)
{
  motorR1.run(FORWARD);
  motorR2.run(FORWARD);
  motorL1.run(BACKWARD);   
  motorL2.run(BACKWARD);
}  
else if(data == 4)
{
  motorR1.run(BACKWARD);
  motorR2.run(BACKWARD);
  motorL1.run(FORWARD);   
  motorL2.run(FORWARD); 
}
else if (data == 5)
{
  motorR1.run(RELEASE);
  motorR2.run(RELEASE);  
  motorL1.run(RELEASE);
  motorL2.run(RELEASE);
}
}
}


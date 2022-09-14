//www.roboticschools.com

#include <AFMotor.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

AF_DCMotor motorR1(2); 
AF_DCMotor motorR2(3); 
AF_DCMotor motorL1(1); 
AF_DCMotor motorL2(4); 

int state;
int Speed = 180; 

void setup() {
  // set the motor speed to 0-255
motorR1.setSpeed(Speed);
motorR2.setSpeed(Speed);
motorL1.setSpeed(Speed); 
motorL2.setSpeed(Speed);
  
Serial.begin(9600);
mySerial.begin(9600);
delay(500); 
}

void loop(){   
if(mySerial.available() > 0)  //if some date is sent, reads it and saves in state
{
  state = mySerial.read();      
  if(state > 10)
{
  Speed = state;
}      
}
           
// set the motor speed to 0-255
motorR1.setSpeed(Speed);
motorR2.setSpeed(Speed);
motorL1.setSpeed(Speed);
motorL2.setSpeed(Speed);

//===============================================================================
//                          Key Control Command
//===============================================================================   
     if(state == 1){forward(); }  // if the state is '1' the DC motor will go forward
else if(state == 2){backward();}  // if the state is '2' the motor will Reverse
else if(state == 3){turnLeft();}  // if the state is '3' the motor will turn left
else if(state == 4){turnRight();} // if the state is '4' the motor will turn right
else if(state == 5){Stop(); }     // if the state is '5' the motor will Stop
/////////////////////////////////////END\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//===============================================================================
//                          Voice Control Command
//===============================================================================
else if(state == 6){turnLeft();  delay(400);  state = 5;}
else if(state == 7){turnRight(); delay(400);  state = 5;}
/////////////////////////////////////END\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
delay(80);    
}

void forward(){
 // turn it on going forward
motorR1.run(FORWARD); 
motorR2.run(FORWARD);
motorL1.run(FORWARD); 
motorL2.run(FORWARD); 
}

void backward(){
 // the other way
motorR1.run(BACKWARD); 
motorR2.run(BACKWARD);
motorL1.run(BACKWARD); 
motorL2.run(BACKWARD);  
}

void turnRight(){
// the other right
motorR1.run(BACKWARD); 
motorR2.run(BACKWARD);
motorL1.run(FORWARD); 
motorL2.run(FORWARD); 
}

void turnLeft(){
 // turn it on going left
motorR1.run(FORWARD); 
motorR2.run(FORWARD);
motorL1.run(BACKWARD); 
motorL2.run(BACKWARD); 
}

void Stop(){
 // stopped
motorR1.run(RELEASE); 
motorR2.run(RELEASE);
motorL1.run(RELEASE); 
motorL2.run(RELEASE); 

}

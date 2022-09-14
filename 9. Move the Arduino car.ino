// www.roboticschools.com

#include <AFMotor.h> 
 
AF_DCMotor motorR1(2);
AF_DCMotor motorR2(3);
AF_DCMotor motorL1(1);
AF_DCMotor motorL2(4);

int Speed = 180; 

void setup() 
{ 
motorR1.setSpeed(Speed);
motorR2.setSpeed(Speed);
motorL1.setSpeed(Speed); 
motorL2.setSpeed(Speed);  
}

void loop(){   

motorR1.run(FORWARD); 
motorR2.run(FORWARD);
motorL3.run(FORWARD); 
motorL4.run(FORWARD); 
 
delay(3000); 

motorR1.run(FORWARD); 
motorR2.run(FORWARD); 
motorL3.run(BACKWARD); 
motorL4.run(BACKWARD);
  
delay(400);
  
motorR1.run(BACKWARD);
motorR2.run(BACKWARD);
motorL3.run(BACKWARD);
motorL4.run(BACKWARD); 
  
delay(3000);
 
motorR1.run(BACKWARD); 
motorR2.run(BACKWARD); 
motorL3.run(FORWARD); 
motorL4.run(FORWARD);
  
delay(400);

}

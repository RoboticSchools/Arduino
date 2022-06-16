#include <AFMotor.h>

#define lefts A5
#define rights A0 

int speed = 200;

AF_DCMotor motorR1(2);  // RightHand Side - Front Motor
AF_DCMotor motorR2(3);  // LeftHand Side - Front Motor
AF_DCMotor motorL1(1);  // RightHand Side - Back Motor
AF_DCMotor motorL2(4);  // LeftHand Side - Back Motor

void setup() {

  pinMode(lefts,INPUT);
  pinMode(rights,INPUT);

  Serial.begin(9600);
  motorR1.setSpeed(speed);
  motorR2.setSpeed(speed);
  motorL1.setSpeed(speed);
  motorL2.setSpeed(speed);
    
}

void loop(){
  
  Serial.println(digitalRead(lefts));
  Serial.println(digitalRead(rights));
 
  if(digitalRead(lefts)==0 && digitalRead(rights)==0){
    
    motorR1.run(FORWARD);
    motorR2.run(FORWARD);   
    motorL1.run(FORWARD);
    motorL2.run(FORWARD);
    
  }
  
  else if(digitalRead(lefts)==1 && digitalRead(rights)==0){

    motorR1.run(BACKWARD);
    motorR2.run(BACKWARD);
    motorL1.run(FORWARD);     
    motorL2.run(FORWARD);
    
  }
  
  else if(digitalRead(lefts)==0 && digitalRead(rights)==1){;


    motorR1.run(FORWARD);
    motorR2.run(FORWARD);
    motorL1.run(BACKWARD);   
    motorL2.run(BACKWARD);

  }

  else if(digitalRead(lefts)==1 && digitalRead(rights)==1){
    
    motorR1.run(RELEASE);
    motorR2.run(RELEASE);  
    motorL1.run(RELEASE);
    motorL2.run(RELEASE);

  }
  
}

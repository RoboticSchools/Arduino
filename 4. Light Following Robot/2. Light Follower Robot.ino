#include <AFMotor.h>

#define lefts A5
#define rights A0 

int speed = 200;

AF_DCMotor motor1(2, MOTOR12_8KHZ);  // RightHand Side - Front Motor
AF_DCMotor motor2(3, MOTOR12_8KHZ);  // LeftHand Side - Front Motor
AF_DCMotor motor3(1, MOTOR12_8KHZ);  // RightHand Side - Back Motor
AF_DCMotor motor4(4, MOTOR12_8KHZ);  // LeftHand Side - Back Motor

void setup() {

  pinMode(lefts,INPUT);
  pinMode(rights,INPUT);

  Serial.begin(9600);
  motor1.setSpeed(speed);
  motor2.setSpeed(speed);
  motor3.setSpeed(speed);
  motor4.setSpeed(speed);
    
}

void loop(){
  
  Serial.println(digitalRead(lefts));
  Serial.println(digitalRead(rights));
 
  if(digitalRead(lefts)==0 && digitalRead(rights)==0){
    
    motor1.run(FORWARD);
    motor2.run(FORWARD);   
    motor3.run(FORWARD);
    motor4.run(FORWARD);
    
  }
  
  else if(digitalRead(lefts)==1 && digitalRead(rights)==0){

    motor1.run(BACKWARD);
    motor2.run(FORWARD);
    motor3.run(BACKWARD);     
    motor4.run(FORWARD);
    
  }
  
  else if(digitalRead(lefts)==0 && digitalRead(rights)==1){;


    motor1.run(FORWARD);
    motor2.run(BACKWARD);
    motor3.run(FORWARD);   
    motor4.run(BACKWARD);

  }

  else if(digitalRead(lefts)==1 && digitalRead(rights)==1){
    
    motor1.run(RELEASE);
    motor2.run(RELEASE);  
    motor3.run(RELEASE);
    motor4.run(RELEASE);

  }
  
}

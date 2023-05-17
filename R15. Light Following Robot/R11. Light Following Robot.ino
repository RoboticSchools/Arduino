// Include the AFMotor library
#include <AFMotor.h>

// Define the input pins for the left and right sensors
#define left A5
#define right A0 

// Create instances of the AF_DCMotor class for the four motors
AF_DCMotor motorR1(2); 
AF_DCMotor motorR2(1);  
AF_DCMotor motorL1(3); 
AF_DCMotor motorL2(4); 

// This function is called once when the Arduino is first turned on or reset
void setup() 
{
  // Set the pinMode for the left and right sensors to INPUT
  pinMode(left,INPUT);
  pinMode(right,INPUT);

  // Start the Serial communication at a baud rate of 9600
  Serial.begin(9600);
  
  // Set the speed of all four motors to 150
  motorR1.setSpeed(150);
  motorR2.setSpeed(150);
  motorL1.setSpeed(150);
  motorL2.setSpeed(150);  
}

// This function runs repeatedly after setup() is called
void loop()
{
  // Print the values of the left and right sensors to the Serial Monitor
  Serial.println(digitalRead(left));
  Serial.println(digitalRead(right));
 
  // If the left sensor detects more light, turn left
  if(digitalRead(left)==LOW && digitalRead(right)==HIGH)
  { 
    motorR1.run(FORWARD);
    motorR2.run(FORWARD);   
    motorL1.run(BACKWARD);
    motorL2.run(BACKWARD); 
  }
  
  // If the right sensor detects more light, turn right
  else if(digitalRead(left)==HIGH && digitalRead(right)==LOW)
  {
    motorR1.run(BACKWARD);
    motorR2.run(BACKWARD);
    motorL1.run(FORWARD);     
    motorL2.run(FORWARD);  
  }
  
  // If both sensors detect equal light levels, move forward
  else if(digitalRead(left)==LOW && digitalRead(right)==LOW)
  {
    motorR1.run(FORWARD);
    motorR2.run(FORWARD);
    motorL1.run(FORWARD);   
    motorL2.run(FORWARD);
  }

  // If both sensors detect no light, stop moving
  else if(digitalRead(left)==HIGH && digitalRead(right)==HIGH)
  {  
    motorR1.run(RELEASE);
    motorR2.run(RELEASE);  
    motorL1.run(RELEASE);
    motorL2.run(RELEASE);
  } 
}

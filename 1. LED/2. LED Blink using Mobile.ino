
#include<SoftwareSerial.h>
SoftwareSerial myserial(2,3);
int led =9;

void setup()
{
  myserial.begin(9600);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  if(myserial.available()>0)
  {
    int data = myserial.read();
    if(data==1)
    {
      digitalWrite(led,HIGH);  
    }
    else if(data==0)
    {
     digitalWrite(led,LOW);
    }
    
  }
  
}

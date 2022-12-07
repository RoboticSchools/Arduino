//www.roboticschools.com

#include<SoftwareSerial.h>

SoftwareSerial blue(2,3);

void setup()
{
  pinMode(8,OUTPUT);
  blue.begin(9600);
}

void loop()
{
  if(blue.available()>0)
  {
    int data = blue.read();
    if(data==1)                // To turn ON LED
    {
      digitalWrite(8,HIGH);
    }
    if(data==0)                // To turn OFF LED
    {
      digitalWrite(8,LOW);
    }
  }

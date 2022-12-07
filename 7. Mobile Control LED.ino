//www.roboticschools.com

#include<SoftwareSerial.h>

SoftwareSerial blue(2,3);

void setup()
{
  pinMode(9,OUTPUT);
  blue.begin(9600);
}

void loop()
{
  if(blue.available()>0)
  {
    int data = blue.read();
    if(data==1)                // To turn ON LED
    {
      digitalWrite(9,HIGH);
    }
    if(data==0)                // To turn OFF LED
    {
      digitalWrite(9,LOW);
    }
    if(data>2)                 // Brightness Control
    {
      analogWrite(9,data);
    }
  }

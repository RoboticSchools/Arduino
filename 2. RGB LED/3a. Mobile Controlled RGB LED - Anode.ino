
#include <SoftwareSerial.h>
SoftwareSerial myserial(2,3);


int redLed =11;
int greenLed =10;
int blueLed = 9;

void setup()
  {
    myserial.begin(9600);
    Serial.begin(9600);
  }

  void loop(){
    if(myserial.available()>0){
      String data=myserial.readString();
      Serial.println(data);
      int firstDot = data.indexOf('.');
      int secondDot = data.indexOf('.',firstDot +1);
      String red=data.substring(0,firstDot);
      String green=data.substring(firstDot + 1,secondDot);
      String blue=data.substring(secondDot+1);

      int r= red.toInt();
      int g=green.toInt();
      int b=blue.toInt();

      analogWrite(redLed,255-r);
      analogWrite(greenLed,255-g);
      analogWrite(blueLed,255-b);
     
    }
  }

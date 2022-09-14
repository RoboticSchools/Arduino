#include <IRremote.h>

int irpin = 7;

IRrecv recv(irpin);

decode_results results;

void setup()
{
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  recv.enableIRIn();
  Serial.println("Enab IRin");
}

void loop()
{
  if(recv.decode(&results)){
    Serial.println(results.value, DEC);
	if(results.value ==16582903)
    {
      digitalWrite(8,HIGH);
    }
    if(results.value ==16593103)
    {
      digitalWrite(8,LOW);
    }
    recv.resume(); 
  }
  delay(100);
}

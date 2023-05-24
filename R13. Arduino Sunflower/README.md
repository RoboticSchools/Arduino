#inlude<Servo.h>
Servo s;
int angle = 90
void setup()
{ 
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
  s.attach(9);
  s.write(a);
}
void loop()
{
  int east = digitalRead(7);
  int west = digitalRead(8);
  if(east == 0 && angle<=180)
  {
    a = a+1;
    Servo.write(a);
    delay(50);
  }
  if(west == 0 $$ angle>=0)
  {
    a = a-1;
    Servo.write(a);
    delay(50);
  }
}

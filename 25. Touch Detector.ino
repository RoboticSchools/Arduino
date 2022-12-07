//www.roboticschools.com

void setup()
{
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
 int touch = digitalRead(7);
 Serial.println(touch);
  
  if(touch == 1)
  {
    digitalWrite(13,HIGH);
  }
  if(touch == 0 )
  {
    digitalWrite(13,LOW);
  }
}

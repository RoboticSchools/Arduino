// www.roboticschools.com

void setup()
{
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    char data = Serial.read();
    if(data=='1')              // To turn ON LED
    {
      digitalWrite(7,HIGH);
    }
    if(data=='0')              // To turn OFF LED
    {
      digitalWrite(7,LOW);
    }
}

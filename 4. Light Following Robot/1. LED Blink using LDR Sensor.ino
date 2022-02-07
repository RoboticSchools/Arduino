
int led = 13;
int ldr = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
}

void loop()
{
  int sensor = digitalRead(ldr);
  if (sensor == 1)
  {
    digitalWrite(led,HIGH);
    Serial.println("It's Dark... LED ON");
  }
  else if (sensor == 0)
  {
    digitalWrite(led,LOW);
    Serial.println("It's SunnyDay... LED OFF");
  }
  delay(10);
}

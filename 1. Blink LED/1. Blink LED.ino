void setup() {
  pinMode(13, OUTPUT); // set pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH); // turn on the LED
  delay(1000); // wait for 1 second
  digitalWrite(13, LOW); // turn off the LED
  delay(1000); // wait for 1 second
}

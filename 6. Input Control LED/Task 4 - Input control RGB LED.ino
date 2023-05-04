// Define the pins for the RGB LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  // Set the pins for the RGB LED as output pins
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Check if any data is available in the serial monitor
  if (Serial.available() > 0) {
    // Read the incoming data from the serial monitor
    char input = Serial.read();

    // Control the RGB LED based on the input received
    
    if (input == 'R') {
      // Turn on the red color
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);
    } 
    
    else if (input == 'G') {
      // Turn on the green color
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, LOW);
    } 
    
    else if (input == 'B') {
      // Turn on the blue color
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, HIGH);
    } 
    
    else if (input == 'Y') {
      // Turn on the yellow color
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, LOW);
    } 
    
    else if (input == 'M') {
      // Turn on the magenta color
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, HIGH);
    } 
    
    else if (input == 'C') {
      // Turn on the cyan color
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, HIGH);
    } 
    
    else if (input == 'W') {
      // Turn on the white color
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, HIGH);
    } 
    
    else {
      // Turn off the RGB LED
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);
    }
  }
}

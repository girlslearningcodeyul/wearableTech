/*
  Code for Girls Learning Code workshop
 */

//pin mappings
int lightPin = 9; // this is a PWM pin, so we can use analogWrite to fade, or digitalWrite to turn on / off. Either digital or analog.
int piezoPin = 3; // piezo pin - for use as sensor pin

int reading;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(lightPin, OUTPUT);

  //for use with FTDI friend
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  reading = analogRead(piezoPin);
  if(reading>0){
    digitalWrite(lightPin, HIGH);
    delay(1000);
    digitalWrite(lightPin, LOW);
  }
 
}


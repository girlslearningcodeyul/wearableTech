
int photocellPin = 1;     // the cell and 10K pulldown are connected to a1
int photocellReading;     // the analog reading from the sensor divider
int LEDpin = 9;      // connect Red LED to pin  (PWM pin)
int LEDbrightness;
 
void setup(void) {
  pinMode(LEDpin, OUTPUT);
}
 
void loop(void) {
  
  //the following code is for the light sensor
   photocellReading = analogRead(photocellPin);  
  // LED gets darker the brighter it is at the sensor
  // that means we have to -invert- the reading from 0-1023 back to 1023-0
  //photocellReading = 1023 - photocellReading;
  //now we have to map 0-1023 to 0-255 since thats the range analogWrite uses
  LEDbrightness = map(photocellReading, 255, 800, 0, 255);
  analogWrite(LEDpin, LEDbrightness);
 
  delay(100);
}

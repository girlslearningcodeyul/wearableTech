
/*
  Code for Girls Learning Code workshop
 */
int fsrAnalogPin = 2; // FSR is connected to analog 2
int LEDpin = 9;      // connect Red LED to pin  (PWM pin)
int fsrReading;      // the analog reading from the FSR resistor divider
int LEDbrightness;
 
void setup(void) {
  pinMode(LEDpin, OUTPUT);
}
 
void loop(void) {
  
  //the following code is for the force sesor
  fsrReading = analogRead(fsrAnalogPin);
  // we'll need to change the range from the analog reading (0-1023) down to the range
  // used by analogWrite (0-255) with map!
  fsrReading = 1023 - fsrReading; //LED will get brighter the harder you push on the sensor... Woah!!!!
  LEDbrightness = map(fsrReading, 0, 1023, 0, 255);


  analogWrite(LEDpin, LEDbrightness);
 
  delay(100);
}

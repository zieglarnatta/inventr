/*

*/
int led = 9;          // PWM pin number
int brightness = 0;  // set LED brigtness
int fadeAmount = 5;   // how many points to fade the pin by

void setup() {
  // set pin 9 as output
  pinMode(led, OUTPUT);
}

void loop() {
  // set pin 9 brightness  
  analogWrite(led, brightness);
  
  // change brightness for the next time through loop
  brightness = brightness + fadeAmount;
  
  // reverse direction of fading at end of fades:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  
  // wait for 40 miliseconds to see dimming
  delay(40);
}

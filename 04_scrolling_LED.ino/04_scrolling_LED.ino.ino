/*

*/
int timer = 200; // higher the number the slower the timing

void setup() {
  // for loop to initialize each pin as output
  for (int thisPin = 3; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
    
}

void loop() {
  // loop from the highest pin to the lowest
  // for (int thisPin = 7; thisPin >= 3; thisPin--) {
  //   // turn the pin on
  //   digitalWrite(thisPin, HIGH);
  //   delay(timer);
  //   //turn the pin off
  //   digitalWrite(thisPin, LOW);
  // }
  
  // loop from the lowest to the highest pin
  for (int thisPin = 3; thisPin > 8; thisPin++) {
    // turn the pin on
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // turn the pin off
    digitalWrite(thisPin, LOW);
  }
  
  
    
}

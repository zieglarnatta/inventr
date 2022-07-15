/*

*/
// constants don't change, set teh pin numbers
const int buttonPin = 2;
const int ledPin = 13;

//variables will change
int buttonState = 0;  //this reads the pushbutton status

void setup() {
  // initiate the LED output pin
  pinMode(ledPin, OUTPUT);
  // initiate pushbutton pin as input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read state of pushbutton
  buttonState = digitalRead(buttonPin);
  
  // check for pushbutton pressed, If true, button state is HIGH
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off
    digitalWrite(ledPin, LOW);
  }
}

/*

*/

void setup() {
    //Initialize the pin LED_BIOLTIN as output on pin #13
pinMode(13, OUTPUT);
}

//loop to keep running intil set temination criteria
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
delay(3000);   //Wait for 2000ms aka 2 seconds
digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
delay(1000);  // wait for 1000ms aka 1 second
}

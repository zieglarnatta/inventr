/*

*/

void setup() {
  //Initialize the pin LED_BIOLTIN as output on pin #13
  pinMode(13, OUTPUT);

}

//loop to keep running intil set temination criteria
void loop() {
  // S is . . . O is _ _ _
  // the "S" in Morse
  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
  delay(1000);   //Wait for 1000ms aka 1 seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
  delay(500);  // wait for 500ms aka 1/2 second

  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
  delay(1000);   //Wait for 1000ms aka 1 seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
  delay(500);  // wait for 500ms aka 1/2 second

  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
  delay(1000);   //Wait for 1000ms aka 1 seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
  delay(500);  // wait for 500ms aka 1/2 second

  // the "O" in Morse
  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
  delay(2000);   //Wait for 2000ms aka 2 seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
  delay(1000);  // wait for 1000ms aka 1 second

  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
  delay(2000);   //Wait for 2000ms aka 2 seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
  delay(1000);  // wait for 1000ms aka 1 second

  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
  delay(2000);   //Wait for 2000ms aka 2 seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
  delay(1000);  // wait for 1000ms aka 1 second

  // the "S" in Morse
  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
  delay(1000);   //Wait for 1000ms aka 1 seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
  delay(500);  // wait for 500ms aka 1/2 second

  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
  delay(1000);   //Wait for 1000ms aka 1 seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
  delay(500);  // wait for 500ms aka 1/2 second

  digitalWrite(LED_BUILTIN, HIGH);  //turn on LED aka high voltage level
  delay(1000);   //Wait for 1000ms aka 1 seconds
  digitalWrite(LED_BUILTIN, LOW);   //turn off LED aka low voltage
  delay(1500);  // wait for 1500ms aka 1.5 second, in anticipation of waiting till next loop cycle
  
}

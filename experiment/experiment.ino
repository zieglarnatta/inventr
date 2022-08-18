int ledPin1 = 10; //pins 10-12 are to be ledPin outputs
int ledPin2 = 11;
int ledPin3 = 12;
int buttonPin1 = 2;  //pins 2-4 are to be buttonPin inputs
int buttonPin2 = 3;
int buttonPin3 = 4;

void setup()
{
  //now setup our input and output pins accordingly
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop()
{
  //now within loop() we'll take actions based on the status of the buttonPines
  //testing...
  if ((digitalRead(buttonPin1) == HIGH) and (digitalRead(buttonPin2) == HIGH) and (digitalRead(buttonPin3) == HIGH))  //conditions when all three buttonPines are on
  {
    digitalWrite(ledPin1, HIGH);
    delay(800);
    digitalWrite(ledPin1, LOW);
    delay(800);
    digitalWrite(ledPin2, HIGH);
    delay(800);
    digitalWrite(ledPin2, LOW);
    delay(800);
    digitalWrite(ledPin3, HIGH);
    delay(800);
    digitalWrite(ledPin3, LOW);
    delay(200);
  }
  if ((digitalRead(buttonPin1) == HIGH) and (digitalRead(buttonPin2) == HIGH)) // if buttonPines 1 and 2 are pressed
    {
        digitalWrite(ledPin1, HIGH);
        delay(800);
        digitalWrite(ledPin1, LOW);
        delay(800);
        digitalWrite(ledPin2, HIGH);
        delay(800);
        digitalWrite(ledPin2, LOW);
        delay(800);
    }
    if ((digitalRead(buttonPin2) == HIGH) and (digitalRead(buttonPin3) == HIGH)) // if buttonPines 2 and 3 are pressed
    {
        digitalWrite(ledPin2, HIGH);
        delay(800);
        digitalWrite(ledPin2, LOW);
        delay(800);
        digitalWrite(ledPin3, HIGH);
        delay(800);
        digitalWrite(ledPin3, LOW);
        delay(800);
    }
    if ((digitalRead(buttonPin1) == HIGH) and (digitalRead(buttonPin3) == HIGH)) // if buttonPines 1 and 3 are pressed
    {
        digitalWrite(ledPin1, HIGH);
        delay(800);
        digitalWrite(ledPin1, LOW);
        delay(800);
        digitalWrite(ledPin3, HIGH);
        delay(800);
        digitalWrite(ledPin3, LOW);
        delay(800);
    }
  else
  {
    if (digitalRead(buttonPin1) == HIGH)     //check buttonPin #1
    {
      digitalWrite(ledPin1, HIGH); // turn ledPin ON
    }
    else
    {
      digitalWrite(ledPin1, LOW); // turn ledPin OFF
    }
    if (digitalRead(buttonPin2) == HIGH)     //check buttonPin #2
    {
      digitalWrite(ledPin2, HIGH); // turn ledPin ON
    }
    else
    {
      digitalWrite(ledPin2, LOW); // turn ledPin OFF
    }
    if (digitalRead(buttonPin3) == HIGH)     //check buttonPin #3
    {
      digitalWrite(ledPin3, HIGH); // turn ledPin ON
    }
    else
    {
      digitalWrite(ledPin3, LOW); // turn ledPin OFF
    }
  }
}
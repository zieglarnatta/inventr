// name the pins that will be used
const int sensorPin = 0;
const int ledPin = 9;

// set up globla variables for light level
int lightLevel;
int caliberatedlightlevel;  // use this to store claibrated light level
int maxThreshold = 0;   // set the max light level
int minThreshold = 1023;    // set the mi light level

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);  // set up LED pin to be output
  Serial.begin(9600);
  }

}

void loop() 
{
  // put your main code here, to run repeatedly:
  lightLevel = analogRead(sensorPin);   // reads the voltage on sensorPin
  Serial.print(lightLevel);
  autoRange();    // autoRange the min max values it sees in the room

  calibratedlightLevel = map(lightLevel, 0, 1023, 0, 255);    // scale the lightLevel from 0 - 1023 range to 0 - 255 range
  // the map() function
  // map(inputValue,
  // fromMin, fromMax, toMin, toMax);
  Serial.print(“\t”); // tab character Serial.print(calibratedlightLevel); // println prints an CRLF at the end (creates a new line after)
  analogWrite(ledPin, calibratedlightLevel); // set the led level based on the input lightLevel.
}

// name the pins that will be used
const int sensorPin = 0;
const int ledPin = 9;

// set up globla variables for light level
int lightLevel;
int calibratedlightLevel;  // use this to store claibrated light level
int maxThreshold = 0;   // set the max light level
int minThreshold = 1023;    // set the mi light level

void setup() 
{
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);  // set up LED pin to be output
  Serial.begin(9600);

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
  Serial.print("\t"); // tab character 
  Serial.print(calibratedlightLevel); // println prints an CRLF at the end (creates a new line after)
  analogWrite(ledPin, calibratedlightLevel); // set the led level based on the input lightLevel.
}
//******************************************************************
//* void autoRange()
//*
//* This function sets a minThreshold and maxThreshold value for the
//* light levels in your setting. Move your hand / light source / etc
//* so that your light sensor sees a full range of values. This will
//* “autoCalibrate” to your range of input values. 
//***********
void autoRange()
{
if (lightLevel < minThreshold) // minThreshold was initialized to 1023 -- so, if it’s less, reset the threshold level.
     minThreshold = lightLevel;
if (lightLevel > maxThreshold) // maxThreshold was initialized to 0 -- so, if it’s bigger, reset the threshold level.
   maxThreshold = lightLevel;
// Once we have the highest and lowest values, we can stick them
// directly into the map() function.
//
// This function must run a few times to get a good range of bright and dark values in order to work.
lightLevel = map(lightLevel, minThreshold, maxThreshold, 0, 255);
   lightLevel = constrain(lightLevel, 0, 255);
}
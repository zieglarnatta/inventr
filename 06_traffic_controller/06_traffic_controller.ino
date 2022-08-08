int red = 10;
int yellow = 9;
int green = 8;

void setup()
// put setup code here to run one:
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
// put main code here to loop:
{
  // turn on yellow and set green at off for 3 miliseconds aka 3s
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH); // turn on yellow
  delay(3000); // keep on for 3 miliseconds aka 3s

  // turn off yellow and turn on red for 5 miliseconds aka 5 seconds
  digitalWrite(yellow, LOW); // turn off yellow
  digitalWrite(red, HIGH);  // turn on red
  delay(5000); // keep on for 5 miliseconds aka 5s

  // European style turn on red and yellow for 2s (red ON already)
  digitalWrite(yellow, HIGH);  // turn on yellow
  delay(2000); // keep on for 

  //  turn off red & yellow and turn on green for  6s
  digitalWrite(yellow, LOW); // turn off yellow
  digitalWrite(red, LOW); // turn off red  
  digitalWrite(green, HIGH); // turn on green
  delay(3000); // keep on for 6s
}
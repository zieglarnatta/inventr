//Credit
// https://create.arduino.cc/projecthub/p-o-i-n-t/project-1-binary-counting-5247b7?ref=tag&ref_id=kids&offset=32

int l[] = {0,0,0,0,0,0},T = 6,a,p; // initiate the integer list (?) and T assigned with 6 and an "a" and a "p" (?)
const int b1 = 12,b2 = 13;    // declare constant integers for button 1 and 2 DIGITAL PWN 12 and 13

void setup() 
{
  // set up all the LEDs as pinMode wired on 2 to 7 on digital PWM
  // use for loop to set up pins 2 - 7
  for (int currentPin = 2; currentPin < 8; currentPin++)
  {
    pinMode(currentPin,OUTPUT);
  }
  
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
}

void loop() // put your main code here, to run repeatedly:
{ p = 0; //initiate p to zero
  p = digitalRead(b1); // do the digital read from Digital PWM #12
  while(digitalRead(b1)!=0) // while button is pressed aka 1 aka true / NOT zero
  {
  }
  delay(100); a = T-1;  //delay for 100ms and assign A with T-1 value, T started with 6
  while(a >=0 && p==1)   // while "a" GT or equal to zero AND p (aka button) compared to 1 aka is pressed
  {
    if (l[a]==1)  // if list wit "a" element is 1
    {
      l[a] = 0;   // assign the list with "a" element as zero
      a--;        // decending "a" / decrease teh "a" value
    }
    else
    {
      l[a] = 1;    // else assign list with "a" element as one
      p = 0;      // and set p pressed button to false
    }
  }
  p = digitalRead(b2);    // assign p to read the second button to see if it is pressed
  while(digitalRead(b2)!=0) // while button is pressed aka 1 aka true / NOT zero
  {
  }
  delay(100); a = T-1;  // delay it for 100ms and assign a to T-1
  while(a >=0 && p==1)   // while "a" GT or equal to zero AND p (aka button) compared to 1 aka is pressed
  {
    if(l[a]==0)
    {
      l[a] = 1;   // assign the list with "a" element as one
      a--;        // decending "a" / decrease teh "a" value
    }
    else
    {
      l[a] = 0;    // else assign list with "a" element as zero
      p = 0;      // and set p pressed button to false      
    }
  }  
  a = T-1;
  for (int c = 0; c < T; c++) // not sure where this c variable came from?
  {
    if (l[c] == 1)  // if the list element "c" is 1
      digitalWrite(T-c+1,HIGH);   // turn on the LED via digitalWrite
    else
      digitalWrite(T-c+1,LOW);    // else turn off the LED via digitalWrite
      a--;    // descending / decrease a by 1
  }
}

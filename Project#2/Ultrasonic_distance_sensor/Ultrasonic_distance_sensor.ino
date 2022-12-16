int distance = 0;                 // Distance is 0
int ECHO = 4;                     // Pin number of echoPin is 4
int TRIG = 5;                     // Pin number of triggerPin is 5
int Vibration_moter = 6;          // Pin number of Vibration_moter is 6
int OrangeLED = 7;                // Pin number of OrangeLED is 7
int RedLED = 8;                   // Pin number of RedLED is 8

int Pin[3] = {Vibration_moter, RedLED, OrangeLED};

long readUltrasonicDistance(int trigger, int echo)    // A function called readUltrasonicDistance
{
  pinMode(trigger, OUTPUT);         // Clear the trigger
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);           // Sets the trigger pin to LOW state for 2 microseconds
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);          // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(trigger, LOW); 
  pinMode(echo, INPUT);           // Reads the echo pin, and returns the sound wave travel time in microseconds
  
  return pulseIn(echo, HIGH);
}

void setup()
{
  Serial.begin(9600);
  for (int i = 0; i < 3; i++)
  {
    pinMode(Pin[i], OUTPUT);
  }
}

void Led (int Numpin, int Cmd, int nDelay)    // A function called Led
{
  digitalWrite(Numpin, Cmd);
  delay(nDelay);      
}

void Vibration (int Numpin, int Cmd, int nDelay)    // A function called Vibration
{
  digitalWrite(Numpin, Cmd);
  delay(nDelay);      
}

void loop()
{
  distance = 0.01723 * readUltrasonicDistance(TRIG, ECHO);
  Serial.println(distance);
  if ((distance < 80) && (distance >= 40))        // Distance is greater than 40 and less than 80.
  {
    Led(OrangeLED, HIGH, 300);                    // The value of OrangeLED is 1, Wait for 300 millisecond(s)
    Led(OrangeLED, LOW, 0);                       // The value of OrangeLED is 0, Wait for 0 millisecond(s)
    Led(RedLED, LOW, 0);                          // The value of RedLED is 0, Wait for 0 millisecond(s)
    Vibration(Vibration_moter, HIGH, 1000);       // The value of Vibration_moter is 1, Wait for 1000 millisecond(s)
    Vibration(Vibration_moter, LOW, 3000);        // The value of Vibration_moter is 0, Wait for 3000 millisecond(s)
  } 
  else if ((distance < 40) && (distance >= 10))   // Distance is greater than 10and less than 40.
  {
    Led(OrangeLED, LOW, 0);                       // The value of OrangeLED is 0, Wait for 0 millisecond(s)
    Led(RedLED, HIGH, 300);                       // The value of RedLED is 1, Wait for 300 millisecond(s)
    Led(RedLED, LOW, 0);                          // The value of RedLED is 0, Wait for 0 millisecond(s)
    Vibration(Vibration_moter, HIGH, 1000);      // The value of Vibration_moter is 1, Wait for 1000 millisecond(s)
    Vibration(Vibration_moter, LOW, 500);        // The value of Vibration_moter is 0, Wait for 500 millisecond(s)
  }
  else
  {
    digitalWrite(RedLED, LOW);                   // The value of RedLED is 0
    digitalWrite(OrangeLED, LOW);                // The value of OrangeLED is 0
    digitalWrite(Vibration_moter, LOW);          // The value of Vibration_moter is 0
  }
}

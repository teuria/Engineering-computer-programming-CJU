#include <Servo.h>

int nPotenPin = A0;
int nServoPin = 2;
int nGreenPin = 3;
int nYellowPin = 5;
int nDelay = 50;

int Pin[2] = {nYellowPin, nGreenPin};     //노랑색, 초록색 LED를 함수로 묶음

Servo myServol;

void setup()
{
  myServol.attach(nServoPin);
  for (int i = 0; i < 2; i++)
  {
    pinMode(Pin[i], OUTPUT);      //for문을 사용해서 노랑색, 초록색 LED를 각각 2,3으로 출력
  }
  Serial.begin(9600);
}

void Led (int Numpin, int Cmd, int nDelay)
{
  analogWrite(Numpin, Cmd);     //Led함수로 analogWrite, nDelay를 받음
  delay(nDelay);      
}

void Led2 (int Numpin, int Cmd, int nDelay)
{
  digitalWrite(Numpin, Cmd);    //Led2함수로 analogWrite, nDelay를 받음
  delay(nDelay);
}

void loop()
{
  int nKnobServo = analogRead(nPotenPin);
  int nServoAng = map(nKnobServo, 0, 1023, 0, 180); //센서에서 읽은 0~1023을 0~180사이 값으로 변환
  int nKnobBlink = analogRead(nPotenPin);
  nKnobBlink = map(nKnobBlink, 0, 700, 0, 255);   //센서에서 읽은 0~700 0~255사이 값으로 변환
  int nKnobDelay = analogRead(nPotenPin);
  nKnobDelay = map(nKnobDelay, 0, 700, 0, 255);   //센서에서 읽은 0~700 0~255사이 값으로 변환
  
  if (nServoAng > 0 && nServoAng <= 90)     //nServoAng이 0보다 크로 90보다 작거나 같을때
  {
    Led2(nYellowPin, HIGH, nKnobDelay);     //nKnobDelay에 따라 깜빡이는 속도가 달라짐
    Led2(nYellowPin, LOW, nKnobDelay);
    Led2(nGreenPin, HIGH, nKnobDelay);
    Led2(nGreenPin, LOW, nKnobDelay);
  }
  else if (nServoAng > 90 && nServoAng <= 180)  //nKnobDelay이 90보다 크고 180보다 작거나 같을때
  {
    Led(nYellowPin, nKnobBlink, nDelay);    //nKnobBlink에 따라 밝기 세기가 달라짐
    Serial.println(nKnobBlink);
    Serial.print("\n");
    Led(nGreenPin, nKnobBlink, nDelay);
    Serial.println(nKnobBlink);
  }
  else                      //위에 경우가 다 아닐때
  {
    Led(nYellowPin, LOW, nDelay);       //LED 둘다 꺼짐
    Led(nGreenPin, LOW, nDelay);
  }

  myServol.write(nServoAng);
  
  delay(nDelay);
}

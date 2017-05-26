#include "Arduino.h"
void stop()
{
digitalWrite(9,LOW);// Unenble the pin, to stop the motor. this should be done to avid damaging the motor.
digitalWrite(10,LOW);
digitalWrite(2,LOW);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
delay(1000);
}

void setup()
{
  pinMode(8,OUTPUT);//I1
  pinMode(2,OUTPUT);//I2
  pinMode(9,OUTPUT);//speedPinA
  pinMode(4,OUTPUT);//I3
  pinMode(7,OUTPUT);//i4
  pinMode(10,OUTPUT);//speedPinB

}


void loop()
{
  stop();

}

#include "Arduino.h"
#include <Servo.h>
int item;

void setup()
{
  pinMode(13, OUTPUT);
}


void loop()
{
  item = analogRead(A0);
  if (item > 50) {
    digitalWrite(13, HIGH);

  } else {
    digitalWrite(13, LOW);

  }

}

#include "Arduino.h"
int item;

void setup()
{
  pinMode(4, INPUT);

  pinMode(13, OUTPUT);
}


void loop()
{
  item = digitalRead(4);
  ;
  if (item == 1) {
    digitalWrite(13, HIGH);

  } else {
    digitalWrite(13, LOW);

  }

}

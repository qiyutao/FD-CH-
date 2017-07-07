#include "Arduino.h"
int item;

void setup()
{
  pinMode(13, OUTPUT);
}


void loop()
{
  item = 1/(log(((float)(1023-(analogRead(A0)))*10000/(analogRead(A0)))/10000)/3975+1/298.15)-273.15;
  ;
  if (item > 33) {
    digitalWrite(13, HIGH);

  } else {
    digitalWrite(13, LOW);

  }

}

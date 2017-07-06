#include "Arduino.h"
#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

void setup()
{
  lcd.begin(16, 2);
  lcd.print("QYT");

}


void loop()
{

}

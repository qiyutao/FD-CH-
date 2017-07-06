goog.provide('Blockly.Arduino.custom');

goog.require('Blockly.Arduino');

Blockly.Arduino.grove_lcd = function() {
	var value_a = Blockly.Arduino.valueToCode(this, 'string', Blockly.Arduino.ORDER_ATOMIC);
  Blockly.Arduino.setups_["grove_lcdset"] = "lcd.begin(16, 2);\n"+
  "  lcd.print(\""+value_a+"\");\n";
  var code = "";
    Blockly.Arduino.definitions_['grove_lcddef'] = "#include <Wire.h>"+
     "  #include \"rgb_lcd.h\"\n"+
     "  rgb_lcd lcd;\n";
    code="";
  
  return code;
};
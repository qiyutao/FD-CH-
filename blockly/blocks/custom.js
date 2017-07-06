goog.provide('Blockly.Blocks.custom');

goog.require('Blockly.Blocks');

Blockly.Blocks['grove_lcd'] = {
  init: function() {
    this.appendValueInput("string")
        .setCheck(null)
        .appendField("LCDœ‘ æ∆¡");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
    this.setTooltip('');
    this.setHelpUrl('');
  }
};
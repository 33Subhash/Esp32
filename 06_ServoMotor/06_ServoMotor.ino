
#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27, 20, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
}

void loop() {
// put your main code here, to run repeatedly:
// this speeds up the simulation
lcd.clear();
lcd.setCursor(0,0);
lcd.print("first line ");
lcd.setCursor(0,1);
lcd.print("second line ");
delay(500);
}

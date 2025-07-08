/*I2C LiquidCrystal Display*/

#include "LiquidCrystal_I2C.h"


LiquidCrystal_I2C lcd(0x27, 20, 2); //Creating LCD object with slave address  

void setup() {
  // put your setup code here, to run once:
  lcd.init(); //Intializes lcd  
  lcd.backlight();
}

void loop() {
// put your main code here, to run repeatedly:
// this speeds up the simulation
  lcd.clear();
  lcd.setCursor(0,0); //Setting cursor to 0th coloum and 0th row 
  lcd.print("first line "); // directly print on LCD
  lcd.setCursor(0,1); //Setting cursor to 0th coloum and 1th row 
  lcd.print("second line "); // directly print on LCD
  delay(500);
}

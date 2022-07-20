/*
  LCD VSS pin to GND
  LCD VDD pin to 5V
  LCD VO pin to POT
  LCD RS pin to digital pin PB11
  LCD RW pin to GND
  LCD EN pin to digital pin PB10
  LCD D0 to D3 pins not used
  LCD D4 pin to digital pin PB0
  LCD D5 pin to digital pin PA7
  LCD D6 pin to digital pin PA6
  LCD D7 pin to digital pin PA5
  LCD BL+ pin to 5V
  LCD BL- pin to GND
*/

#include <LiquidCrystal.h>

const int rs = PB11, en = PB10, d4 = PB0, d5 = PA7, d6 = PA6, d7 = PA5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {

  lcd.setCursor(0, 0);
  lcd.print("STM32 Blue Pill");

  lcd.setCursor(0, 1);
  lcd.print("ElectroCodeur");
}

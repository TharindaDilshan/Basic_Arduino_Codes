#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  lcd.begin(16, 2);
  lcd.print("UNIVERSITY OF");
  lcd.setCursor(3, 1);
  lcd.print("COLOMBO");

}

void loop() {
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);

}

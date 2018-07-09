#include <LiquidCrystal.h>


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {

  //>>>>>>
  for (int i = 0; i <= 16; i++) {
    lcd.setCursor(i, 0);
    lcd.print("hello, world!");
    delay(200);
    lcd.clear();
    lcd.setCursor(7, 1);
    lcd.print(millis() / 1000);
  }

//<<<<<<<<<<
  for (int i = 16; i >= 0 ; i--) {
    lcd.setCursor(i, 0);
    lcd.print("hello, world!");
    delay(200);
    lcd.clear();
    lcd.setCursor(7, 1);
    lcd.print(millis() / 1000);
  }


    //<<<<<<<<<<<<<
  for (int i = -25; i >= -37; i--) {
    lcd.setCursor(i, 0);
    lcd.print("hello, world!");
    delay(200);
    lcd.clear();
    lcd.setCursor(7, 1);
    lcd.print(millis() / 1000);
  }

  
  //>>>>>>>>>
  for (int i = -37; i <= -25; i++) {
    lcd.setCursor(i, 0);
    lcd.print("hello, world!");
    delay(200);
    lcd.clear();
    lcd.setCursor(7, 1);
    lcd.print(millis() / 1000);
  }







}

#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  int iluminare = analogRead(0);
  lcd.setCursor(0, 0);
  lcd.print("Salutare Lume,"); 
  lcd.setCursor(0, 1);
  lcd.print("Iluminare: " ); 
  lcd.print(iluminare); 
  Serial.println(iluminare);
  delay( 10);
}

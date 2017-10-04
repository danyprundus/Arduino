#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int Albastru = 23;
void setup(){
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(Albastru,OUTPUT);
  
}

void loop(){
  Serial.print("Temperatura: ");
  float temperatura = readTempInCelsius(10,0);
  Serial.print(temperatura);
  Serial.print("  ");
  Serial.println("C");
  lcd.setCursor(0, 0);
  lcd.print("Salut Victor"); 
  lcd.setCursor(0, 1);
  
  lcd.print("Temp: " ); 
  lcd.print(temperatura); 
  if(temperatura>24){
    Serial.print("Arde");
    Aprinde(Albastru);
    }
    else{
      Stinge(Albastru);
      }
  delay(1000);
}


void Aprinde(int pin){
    digitalWrite(pin, HIGH);
}
void Stinge(int pin){
    digitalWrite(pin, LOW);
}
void Pauza (int milisecunde){
  delay(milisecunde);
}


float readTempInCelsius(int count, int pin) {
  float temperaturaMediata = 0;
  float sumaTemperatura = 0;
  for (int i =0; i < count; i++) {
    int reading = analogRead(pin);
    float voltage = reading * 5.0;
    voltage /= 1024.0;
    float temperatureCelsius = (voltage - 0.5) * 100 ;
    sumaTemperatura = sumaTemperatura + temperatureCelsius;
  }
  return sumaTemperatura / (float)count;
}

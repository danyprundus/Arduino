  int Verde = 7;
  int Albastru = 11;
  int Galben = 8;
  int Rosu = 53;

void setup() {
  // put your setup code here, to run once:
  pinMode(Galben, OUTPUT);
  pinMode(Verde, OUTPUT );
  pinMode(Albastru,OUTPUT);
  pinMode(Rosu,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Aprinde(Galben);
Pauza(900);
Stinge(Galben);
Aprinde(Rosu);
Pauza(100);
Aprinde(Albastru);
Pauza(400);
Stinge(Albastru);

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


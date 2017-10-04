void setup() {
  // put your setup code here, to run once:
  int Verde = 7;
  int Albastru = 11;
  int Galben = 8;
  int Rosu = 53;
  pinMode(Galben, OUTPUT);
  pinMode(Verde, OUTPUT );
  pinMode(Albastru,OUTPUT);
  pinMode(Rosu,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);

    delay(100);
    
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);

    delay(100);
    digitalWrite(11, LOW);
    digitalWrite(53, HIGH);
    delay(100);
  
    digitalWrite(53, LOW);
    delay(900);
    digitalWrite(11, HIGH);

    delay(100);
    
}

void Aprinde(int pin){
    digitalWrite(pin, HIGH);
}
void Stinge(int pin){
    digitalWrite(pin, LOW);
}
void Pauza (int mmilisecunde){
  delay(milisecunde)
}


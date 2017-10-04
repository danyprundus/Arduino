int Albastru = 11;
int Buton = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(Albastru, OUTPUT);
  pinMode(Buton, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cumEButonul=Detecteaza(Buton);
  if (cumEButonul!=1){
    Stinge(Albastru);
  }
  else{
  Aprinde(Albastru);    
  }
Pauza(500);
Serial.print(cumEButonul);
}


int Detecteaza(int pin){
   return  digitalRead(pin);
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


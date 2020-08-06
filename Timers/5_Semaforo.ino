int refV=3000;
int refA=2000;
int refR=5000;

int pinV=8;
int pinA=9;
int pinR=10;

float tiempo;
float ultimoTiempo;

void setup() {
  pinMode(pinV,OUTPUT);
  pinMode(pinA,OUTPUT);
  pinMode(pinR,OUTPUT);
}

void loop() {
  tiempo=millis();

  if(tiempo-ultimoTiempo==refV){
    pinMode(pinV,HIGH);
    pinMode(pinA,LOW);
    pinMode(pinR,LOW);
    ultimoTiempo=tiempo;
  }else if(tiempo-ultimoTiempo==refA){
    pinMode(pinV,LOW);
    pinMode(pinA,HIGH);
    pinMode(pinR,LOW);
    ultimoTiempo=tiempo;
  }else if(tiempo-ultimoTiempo==refR){
    pinMode(pinV,LOW);
    pinMode(pinA,LOW);
    pinMode(pinR,HIGH);
    ultimoTiempo=tiempo;
  }
}

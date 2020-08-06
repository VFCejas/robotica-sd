int ledV=8;
int ledA=9;
int ledR=10;

int boton1=1;
int boton2=1;

bool cruzo=true;

void setup() {
  pinMode(ledV,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledR,OUTPUT);
  
  pinMode(boton1,INPUT);
  pinMode(boton2,INPUT);

  attachInterrupt(digitalPinToInterrupt(boton1), cruzando, RISING);
  attachInterrupt(digitalPinToInterrupt(boton2), cruzado, RISING);
}

void loop() {
  if(cruzo){
    verde();
    delay(3000);
    amarillo();
    delay(2000);
    rojo();
    delay(5000);
  } else {cruzar();}
}

void verde(){
  digitalWrite(ledV,HIGH);
  digitalWrite(ledA,LOW);
  digitalWrite(ledR,LOW);
}

void amarillo(){
  digitalWrite(ledV,LOW);
  digitalWrite(ledA,HIGH);
  digitalWrite(ledR,LOW);
}

void rojo(){
  digitalWrite(ledV,LOW);
  digitalWrite(ledA,LOW);
  digitalWrite(ledR,HIGH);
}

void cruzar(){
  digitalWrite(ledV,HIGH);
  digitalWrite(ledA,HIGH);
  digitalWrite(ledR,HIGH);
}

void cruzando(){
  cruzo=false;
}

void cruzado(){
  cruzo=true;
}

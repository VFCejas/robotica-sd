int ledV=8;
int ledA=9;
int ledR=10;

int boton=1;

void setup() {
  pinMode(ledV,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledR,OUTPUT);
  
  pinMode(boton,INPUT);

  attachInterrupt(digitalPinToInterrupt(boton), ciego, RISING);
}

void loop() {
  verde();
  delay(3000);
  amarillo();
  delay(2000);
  rojo();
  delay(5000);
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

void ciego(){
  digitalWrite(ledV,HIGH);
  digitalWrite(ledA,HIGH);
  digitalWrite(ledR,HIGH);
  delay(5000);
}

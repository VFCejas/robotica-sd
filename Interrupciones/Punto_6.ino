float tiempo;
float tiempoAnterior;
float ref=5000;

int led=8;
int boton=1;

int estado=LOW;

void setup() {
  pinMode(boton,INPUT);
  pinMode(led,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(boton),restar,RISING);
}

void restar(){
  ref-=500;
}

void loop() {
  tiempo=millis();
  digitalWrite(led,estado);
  if(tiempo-tiempoAnterior==ref){
    if(estado==LOW){estado=HIGH;}
    else{estado=LOW;}
    tiempoAnterior=tiempo;
  }
}

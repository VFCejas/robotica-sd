int pulsador=1;
int led=9;
int estado=LOW;

void setup(){
  pinMode(pulsador,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(pulsador), cambio, CHANGE);
}

void loop(){}

void cambio(){
  if(estado==LOW){
    estado=HIGH;
    digitalWrite(led,estado);
  } else {
    estado=LOW;
    digitalWrite(led,estado);
  }
}

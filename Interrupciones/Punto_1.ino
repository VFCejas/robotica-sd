int pulsador=1;

void setup(){
  pinMode(pulsador,INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(pulsador), cambio, CHANGE);
}

void cambio(){
  Serial.println("Cambio de estado");
}

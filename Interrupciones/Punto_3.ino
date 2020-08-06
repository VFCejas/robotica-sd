int boton=1;
int toques=0;

void setup(){
  pinMode(boton,INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(boton), promedio, RISING);
}

void promedio(){
  toques+=1;
}

void loop(){
  delay(5000);
  Serial.print("El promedio de veces que se tocó el botón fue de ");
  Serial.print(toques/5);
  Serial.println(" toques por segundo");
  toques=0;
}

int led=8;
int estado=LOW;
int tiempo;

void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  digitalWrite(led,estado);
  tiempo=millis();
  if(tiempo%2==0){
    if(estado==LOW){estado=HIGH;}
    else {estado=LOW;}
  }
}

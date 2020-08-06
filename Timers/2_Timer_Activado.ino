int tiempo;

void setup() {
  Serial.begin(9600);
}

void loop() {
  tiempo=millis();
  if(tiempo%2==0){
    Serial.println("Timer Activado");
  }
}

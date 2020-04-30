int led = 8;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  if (Serial.available()>0){
    String estado = Serial.readString();
      if(estado=="encender"){
        digitalWrite(led,HIGH);
        delay(1000);
      }
      else if(estado=="apagar"){
        digitalWrite(9,LOW);
        delay(1000);
      }
  }
}

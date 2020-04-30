void setup() {
  Serial.begin(9600);
}

void loop() {
  String lectura = Serial.readString();
  
  if (Serial.available()>0){
      if(lectura=="hola"){
        Serial.print("¿Cómo estás?");
      }
        else if(lectura!="hola"){
      }
  }
}

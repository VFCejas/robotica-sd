void setup(){
  Serial.begin(9600);
}

void loop(){
  String n1;
  String n2;
  int resultado = 0;
  Serial.println("\n ingrese el primer número");
  delay(5000);
  if (Serial.available()){
    a = Serial.readString();
  }

  if ( a != 0){
    Serial.println("\n ingrese el segundo numero");
    delay(5000);
    if (Serial.available()){
      b = Serial.readString();
    }

    resultado = a + b;
    
    Serial.print("El resultado es: ");
    Serial.print(String(resultado));
    delay(6000);
  }
}

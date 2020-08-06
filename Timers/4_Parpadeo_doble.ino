/* Realizar un programa donde se conecten dos LEDs, 
el uno parpadee cada 2 segundos y el otro cada 1 segundo.
*/
int led1=8;
int led2=9;
bool estado1=LOW;
bool estado2=LOW;
int tiempo;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led1,estado1);
  digitalWrite(led2,estado2);
  tiempo=millis()/1000;

  if(tiempo%2==0){ //entra acá cada 2 segundos
    Serial.println("Tiempo par");
    //parpadeo el led 1

    if(estado1==LOW){estado1=HIGH;}
    else{
      estado1=LOW;
    }

  } 

  else if((tiempo%2)!=0){ //entra acá cada 1 segundo
        Serial.println("Tiempo impar");
    //parpadeo el led 1
    if(estado2==LOW){estado2=HIGH;}
    else{
      estado2=LOW;
    }
  }
}

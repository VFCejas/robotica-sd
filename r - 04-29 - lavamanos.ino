//Hecho por Valentín Fernández Cejas y Agustín Andonegui
//Como ya te dijimos, no tenemos arduino. F
//Hoy, 3/4 a la tarde te enviamos el video
//Perdón por hablarte tan tarde al whatsapp. Te queremos, capo

int tiempo;

int ledRojo =8;
int ledVerde=9;

bool lavando=false;
bool lavado=false;

const int Trigger = 2;   //Pin digital 2 para el Trigger del sensor
const int Echo = 3;   //Pin digital 3 para el Echo del sensor

void setup() {
  
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT);  //pin como entrada
  digitalWrite(Trigger, LOW);//Inicializamos el pin con 0

  pinMode(ledRojo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
}

void loop(){

  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59;             //escalamos el tiempo a una distancia en cm
  
  if(d>0.1 && d<2){lavando=true;}

  if(lavando){
    for(int i; i==20;){
      if(d<0.1 || d>2){
        digitalWrite(ledRojo,HIGH);
        delay(500);
        digitalWrite(ledRojo,LOW);
        delay(500);
      }
      else{
        digitalWrite(ledRojo,HIGH);
        i++;
        delay(1000);
      }

      if(i>19){
        lavando=false;
        lavado=true;
      }
    }
  }

  if(lavado){
    digitalWrite(ledRojo,LOW);
    digitalWrite(ledVerde,HIGH);
    delay(5000);
    digitalWrite(ledVerde,LOW);
    lavado=false;
  }
}

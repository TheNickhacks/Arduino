//Alarma Sismica
int vib=8;
int led=9;
int buzzer=10;
bool estado;

void setup() 
{
  pinMode(vib,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT); 
}

void loop() 
{
  estado=digitalRead(vib);
  if(estado==HIGH)
  {
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(5000);
    }
  else
  {
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    }
}

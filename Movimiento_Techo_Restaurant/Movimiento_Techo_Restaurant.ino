#include <Servo.h>
int led = 13; // led

int ldr = A0; // sensor de luz
Servo servo;

void setup() { // funcion void setup
Serial.begin(9600); // monitor serial
pinMode(led, OUTPUT);
pinMode(ldr, INPUT);
servo.attach(9);
}

void loop() {
int ldrEstado = analogRead(ldr);
if (ldrEstado <=700){
  servo.write(0);
 delay(3000);
  digitalWrite(led, LOW);
Serial.print("Esta Claro, Apagar el led: ");
Serial.println(ldrEstado);
 
}

else{ // si el sensor de movimiento esta apagado
digitalWrite(led, HIGH); // LED SE PRENDE
delay(500);
 servo.write(90);
  delay(3000);
  Serial.print("Esta oscuro, Prende el led: ");
Serial.println(ldrEstado);
}
//Comandos no USADOS
// digitalWrite(led, LOW);
//delay(500);
}

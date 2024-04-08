int buzzer = 11;
int valorSensor = 0;
void setup() {
  // seteo de la velocidad del puerto serial
  Serial.begin(9600);
  //declarar buzzer como una SALIDA:
  pinMode(buzzer, OUTPUT);
}
void loop() {
  // leer el valor del sensor:
  valorSensor= analogRead(A0);
  Serial.println(valorSensor);
 // activa el bauzzer
 if(valorSensor< 500) {
  digitalWrite(buzzer, HIGH);
  delay(100);
  //desactiva el buzzer
  digitalWrite(buzzer, LOW);
  delay (50);
}
}
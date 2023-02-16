int estado = 0;

void setup() {
  pinMode(5,OUTPUT);
  pinMode(4,INPUT);

}

void loop() {
  estado = digitalRead(4);
  if (estado == 1) {
    digitalWrite(5,HIGH);
  }else{
    digitalWrite(5,LOW);
  }
delay(1000);
}

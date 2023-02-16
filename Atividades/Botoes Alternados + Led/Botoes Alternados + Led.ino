int estadoBotao1 = 0;
int estadoBotao2 = 0;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,INPUT);
  pinMode(4,INPUT);

}

void loop() {
  estadoBotao1 = digitalRead(4);
  estadoBotao2 = digitalRead(5);
  if(estadoBotao1 == HIGH && estadoBotao2 == LOW){
    digitalWrite(3,HIGH);
  }else if(estadoBotao1 == LOW && estadoBotao2 == HIGH){
    digitalWrite(3,HIGH);
  }else{
    digitalWrite(3,LOW);
  }
}

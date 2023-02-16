int estadoBotao1=0;
int estadoBotao2=0;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);

}

void loop() {
  estadoBotao1 = digitalRead(4);
  estadoBotao2 = digitalRead(5);
  if(estadoBotao1== HIGH && estadoBotao2== HIGH){
    digitalWrite(3,HIGH);
  }else{
    digitalWrite(3,LOW);
  }
  delay(100);
}

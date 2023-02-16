int sinal;
bool estadoled = 0;
void setup() {
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    sinal = Serial.read();
    if(sinal > 0){
      estadoled = !estadoled;
    }
    digitalWrite(3,estadoled);
  }
}

int pwm;

void setup() {
    pinMode(2,OUTPUT);
}

void loop() {
  for(pwm=0;pwm<255;pwm++){
    delay(20);
    analogWrite(2,pwm);
  }
    for(pwm=255;pwm>=0;pwm--){
    delay(20);
    analogWrite(2,pwm);
  }
}

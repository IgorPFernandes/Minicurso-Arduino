void setup() {
  pinMode(3,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  digitalWrite(3,HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);

}

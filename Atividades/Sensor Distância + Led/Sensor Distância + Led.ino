#include <HCSR04.h>

UltraSonicDistanceSensor Sensor(12,13);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
float distance = Sensor.measureDistanceCm(36);
Serial.println(distance);
  if(distance<30.0){
    digitalWrite(3,HIGH);
  }else{
    digitalWrite(3,LOW);
  }
  delay(100);
}

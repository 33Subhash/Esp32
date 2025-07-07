#include "ESP32Servo.h"
#define ServoPin 4 

Servo servo1 ;
void setup() {
  // put your setup code here, to run once:
  servo1.attach(ServoPin , 500 ,2400);
}

void loop() {
  // put your main code here, to run repeatedly:
 // this speeds up the simulation
  int pos=0;
  for(pos=0 ; pos <= 181;pos+=1){
    servo1.write(pos);
    delay(10);
  }

  for(  ; pos>=0 ; pos-=1){
    servo1.write(pos);
    delay(10);
  }
  
}
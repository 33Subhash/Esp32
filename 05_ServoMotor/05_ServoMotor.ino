#include "ESP32Servo.h"
#define ServoPin 4 

//Creating servo object to control servo motor  
Servo servo1 ;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(ServoPin , 500 ,2400);// Attach the servo to ServoPin with pulse width range from 500µs (0°) to 2400µs (180°)
}

void loop() {
  // put your main code here, to run repeatedly:
 // this speeds up the simulation
  int pos=0;
  for(pos=0 ; pos <= 181;pos+=1){
    servo1.write(pos); //Set servo1 to the angle specified by 'pos' (0 to 180 degrees)
    delay(10);
  }

  for(  ; pos>=0 ; pos-=1){
    servo1.write(pos); // Set servo1 to the angle specified by 'pos' (0 to 180 degrees)
    delay(10);
  }
  
}
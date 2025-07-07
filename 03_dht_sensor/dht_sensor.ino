#include "DHT.h"
#define DPIN 4 
#define DTYPE DHT11 

#define PushPin  2
#define LedPin  5

void setup() {
  Serial.begin(9600);
  pinMode(PushPin, INPUT);
  pinMode(LedPin ,OUTPUT );
}

void loop() {
  if(digitalRead(PushPin)==HIGH) {
    digitalWrite(LedPin,HIGH);

  }else{
    digitalWrite(LedPin, LOW);
  }
  
}
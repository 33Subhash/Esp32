
#define ledPin 4 

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int dutyCycle=0;
  
  for(dutyCycle=0 ; dutyCycle<=255 ; dutyCycle+=1 ){
    analogWrite(ledPin,dutyCycle );
    delay(100);
  } 
  
}
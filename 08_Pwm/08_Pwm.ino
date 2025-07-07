#define pirInput 4 

void setup() {
  // put your setup code here, to run once:
  pinMode(pirInput , INPUT);
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
}
int pirState=LOW;
void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  int pirReading=digitalRead(pirInput);
  
  
  if (pirReading== HIGH ){
    if (pirState == LOW){
      Serial.println("motion detected");
      pirState=HIGH;

    }
  }else{
    if(pirReading ==HIGH ){
      Serial.println("motion dection ended ");
      pirState=LOW;
    }
  }
  
}

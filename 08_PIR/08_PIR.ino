/*Passive infrared sensor */

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
  int pirReading=digitalRead(pirInput); // Read digital signal from PIR sensor (HIGH if motion detected )
  
  if (pirReading== HIGH ){
    if (pirState == LOW){
      Serial.println("motion detected");
      pirState=HIGH; //to print once motion detected 

    }
  }else{
    if(pirReading ==HIGH ){
      Serial.println("motion dection ended ");
      pirState=LOW; //to print once motion detection ended 
    }
  }
  
}

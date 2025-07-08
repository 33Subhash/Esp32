/*Interfaced LDR to find light intensity */

#define DigitalInput 26  //GPIO 26 used as digital input 
#define AnalogInput 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //Setting buad rate to initialize serial terminal 
  pinMode(DigitalInput, INPUT); 
  pinMode(AnalogInput , INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  int lightState=digitalRead(DigitalInput  ); // Reading digital data from DO pin in LDR 
  int lightIntensity=analogRead(AnalogInput); // Reading analog data from AO pin in LDR 

  if (lightState == 1){
    Serial.println("no light dark ");
    Serial.print("intensity : ");
    Serial.println(lightIntensity);
  }else{
    Serial.println("bright light ");
    Serial.print("intensity : ");
    Serial.println(lightIntensity);
  }
  delay(6500);
}

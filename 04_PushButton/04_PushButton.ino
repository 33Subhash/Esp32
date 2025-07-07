#define DigitalInput 26 
#define AnalogInput 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(DigitalInput, INPUT);
  pinMode(AnalogInput , INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  int lightState=digitalRead(DigitalInput  );
  int lightIntensity=analogRead(AnalogInput);

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

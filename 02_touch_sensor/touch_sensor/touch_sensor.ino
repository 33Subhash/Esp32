/* Blink led when touch sensed */


const int touchPin=4 ; //Touch sensor connected to this pin 
const int ledPin=16;   //Led is connected to 16
const int threshold=20; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //Begin serial terminal  with specified buad rate   
  Serial.println("Hello, ESP32!");
  pinMode(ledPin , OUTPUT); //Configure ledPin as output

} 

void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  
  int touchValue=touchRead(touchPin); //Returns capactive touch sensor value  

  Serial.println(touchValue ); //Display touch in serial terminal for debuging  
  
  if (touchValue < threshold ) {
    digitalWrite(ledPin , HIGH);//Turning on led 
  }else{
    digitalWrite(ledPin , LOW);//Turing off led 
  }
}
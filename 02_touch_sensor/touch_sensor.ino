
const int touchPin=4 ;
const int ledPin=16;
const int threshold=20;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);  
  Serial.println("Hello, ESP32!");
  pinMode(ledPin , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  int touchValue=touchRead(touchPin);

  Serial.println(touchValue );
  if (touchValue < threshold ) {
    digitalWrite(ledPin , HIGH);
    
  }else{
    digitalWrite(ledPin , LOW);
  }
}
#define relay 26 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(relay, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  digitalWrite(relay,HIGH );
  Serial.println("Current Flowing");
  delay(5000); 
  digitalWrite(relay, LOW);
  Serial.println("Current not Flowing");
  delay(5000); 
}


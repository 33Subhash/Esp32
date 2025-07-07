#include <WiFi.h>
#include <time.h>

#define  trigPin   5
#define  echoPin   18
#define ssid "OnePlus"
#define password "subhash33"

//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float distanceCm;

//time variables
const long gmtOffset=19800 ; // 5.5*3600

//bluetooth variables
//BluetoothSerial SerialBT;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  
  
  //configure wifi 
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected");
  configTime(gmtOffset,0 , "pool.ntp.org","time.nist.gov");
  struct tm timeinfo ;
  Serial.println(&timeinfo ,"time is: %A,%B %d %Y %H:%M:%S");


  /*configure bluetooth
  SerialBT.begin("ESP32test");
  Serial.print("device started to connect ");
  */
}

void loop() {
  struct tm timeinfo ;
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
 
  // Calculate the distance
  distanceCm = duration * SOUND_SPEED/2;
 
  if ( distanceCm < 30){
    
    Serial.print("object in target range 30cm ");
    Serial.println(distanceCm);
    
    ///SerialBT.print("Object in target range 30cm: ");
    //SerialBT.println(distanceCm);
  }
  delay(20);
}
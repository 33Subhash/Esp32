const int trigPin = 5;
const int echoPin = 18;
const int redPin=14;
const int greenPin=27;
const int bluePin=26;
//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float distanceCm;

 
void setup() {
  Serial.begin(115200); // Starts the serial communication
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(redPin, OUTPUT); // Set the red LED pin as output
  pinMode(greenPin, OUTPUT); // Set the green LED pin as output
  pinMode(bluePin, OUTPUT); // Set the blue LED pin as output
}
void colour(int r,int g,int b){
  // Set the LED to red
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
  
}
void loop() {
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
 
  if ( distanceCm < 7.5 ){
    Serial.print("distance in range of 7.5cm :");
    Serial.println(distanceCm);
    colour(255,0,0);

  }else if(distanceCm < 15  ){
    Serial.print("distance in range of 15cm :");
    Serial.println(distanceCm);
    colour(255,255,0);

  }else if(distanceCm < 30 ){
    Serial.print("distance in range of 30cm :");
    Serial.println(distanceCm);
    colour(0,255,0);
  }else{
    colour(0,0,0);
  }



}
  
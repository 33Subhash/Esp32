#define PIN_RED 33
#define PIN_GREEN 32
#define PIN_BLUE 34


void setup() {
  pinMode(PIN_RED , OUTPUT );
  pinMode(PIN_GREEN , OUTPUT);
  pinMode(PIN_BLUE,OUTPUT);

}

void setColour(int red , int blue , int green ){
  analogWrite(PIN_RED , red );
  analogWrite(PIN_BLUE ,blue );
  analogWrite(PIN_GREEN  , green );
}

void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  setColour(255,0,0);
  delay(500);
  setColour(0,255,0);
  delay(500);
  setColour(0,0,255);
  delay(500);
  setColour(255,255,255);
  delay(500);
}


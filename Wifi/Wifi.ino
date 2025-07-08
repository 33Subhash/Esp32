#include <WiFi.h>

const char *ssid="OnePlus";
const char  *password="subhash33";

void setup(){
  Serial.begin(9600);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid , password );
  Serial.print("connecting wifi ");

  while(WiFi.status()!=WL_CONNECTED ){
    Serial.print(".");
    delay(500);
  }

  Serial.print("\nWifi connected ");
  Serial.println(WiFi.localIP());

}
void loop() {
  // Your code here
}
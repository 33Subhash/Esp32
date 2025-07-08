/*code to blink led */

void setup()
{  
  pinMode(2, OUTPUT); //Set the pin direction  
}
void loop()
{
    digitalWrite(2,HIGH); 
    delay(500); //delay in milliseconds 
    digitalWrite(2,HIGH);
    delay(500); //delay in milliseconds 
}


#include "LED_13.h"
#include "Arduino.h"

LED_13::LED_13(int led_light13) {
  led_no=led_light13;
}
void LED_13::PinSetup() {
  pinMode(led_no,OUTPUT);
  
}

void LED_13::Blinker(){

  digitalWrite(led_no, HIGH);  
  delay(100);         
  digitalWrite(led_no, LOW);  
  delay(100);                
 
}  

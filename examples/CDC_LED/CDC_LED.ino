#include <TeenySerial.h>
void setup() {                
  // initialize the digital pin as an output.
  TeenySerial.begin(); 
  pinMode(1,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  //turns led on and off based on sending 0 or 1 from serial terminal
  if (TeenySerial.available()) {
    char input = TeenySerial.read();
    if(input == '0')
      digitalWrite(1,LOW);
    else if(input == '1')
      digitalWrite(1,HIGH);
      
  }
  
   TeenySerial.delay(100);               // keep usb alive // can alos use TeenySerial.refresh();
}

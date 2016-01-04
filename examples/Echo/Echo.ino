#include <TeenySerial.h>
void setup() {                
  // initialize the digital pin as an output.
  TeenySerial.begin(); 
}

// the loop routine runs over and over again forever:
void loop() {
  
  if (TeenySerial.available()) {
    TeenySerial.write(TeenySerial.read());
  }
  
   //TeenySerial.delay(10);
   /*
   if you don't call a TeenySerial function (write, print, read, available, etc) 
   every 10ms or less then you must throw in some TeenySerial.refresh(); 
   for the USB to keep alive - also replace your delays - ie. delay(100); 
   with TeenySerial.delays ie. TeenySerial.delay(100);
   */
}
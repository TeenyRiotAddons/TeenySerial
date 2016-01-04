#include <TeenySerial.h>
void setup() {                
  // initialize the digital pin as an output.
  TeenySerial.begin(); 
  /*
  remember the TeenySerial starts as soon as you call begin 
  and doesn't restart the board when you open the serial monitor 
  (like the uno does) - so if you print to it and you don't 
  have a serial monitor open that text is lost.
  */
}

// the loop routine runs over and over again forever:
void loop() {
  
  TeenySerial.println(F("TEST!")); //wrap your strings in F() to save ram!
  
   //TeenySerial.delay(10);
   /*
   if you don't call a TeenySerial function (write, print, read, available, etc) 
   every 10ms or less then you must throw in some TeenySerial.refresh(); 
   for the USB to keep alive - also replace your delays - ie. delay(100); 
   with TeenySerial.delays ie. TeenySerial.delay(100);
   */
}
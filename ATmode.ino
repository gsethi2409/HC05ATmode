//+ADDR:98d3:32:209bbb
//Serial Monitor: Both NL&CR with baud 9600
 
#include <SoftwareSerial.h>
SoftwareSerial BTserial(2, 3); // RX | TX
void setup() 
{
    Serial.begin(9600);
    BTserial.begin(38400); //default baud rate
}
 
void loop()
{
  
}

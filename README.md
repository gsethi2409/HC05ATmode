# HC05ATmode

The code can be used to put HC-05 Bluetooth module(with button/switch for EN pin/pin34) into AT-command mode.
Connections:

– BT VCC to Arduino 5V
– BT GND to Arduino GND
– BT TX to Arduino D2
– BT RX to Arduino D3 

Procedure:

With the Arduino on, do the following
– Remove the 5V connection to BT VCC
– Press and hold the button switch on the BT module
– Re-connect BT VCC to 5V (while still pressing the button switch), the LED should come on.
– Release the button switch and the LED should be blinking slowly on/off once every couple of seconds. This indicates AT mode.

# Hexy To Do List
- Test new pinouts using a 3DoT board 
- Order PCBs 
- Assemble the shield 
- Test the shield 
- Figure out how to turn without bobbing 

# Pin Initialization
|Shield Input|Pin Configurations|Pin # (Arduino)|Pin # (ATmega32U4)|
|---|---|---|---|
|Shaft Encoder L (OUT A)|PDO/PCINT3/MISO|D14|PB3|
|Shaft Encoder L (OUT B)|PDI/PCINT2/MOSI|D16|PB2|
|Shaft Encoder R (OUT A)|PCINT1/SCLK|D15|PB1|
|Shaft Encoder R (OUT B)|SS/PCINT0|D17|PB0|
|Gear Sens L|SDA/INT1|D2|PD1|
|Gear Sens R|OC0B/SCL/INT0|D3|PD0

Shaft Encoder inputs will be read from a pin change interrupt. Gear sensors can be read using analogRead on any digital pin. 

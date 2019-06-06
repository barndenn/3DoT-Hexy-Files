# 3DoT Hexy Files 

# 3DoT Hexy Shield Pins 
Shaft Encoder L (OUT A) - D14, (PDO/PCINT3/MISO) PB3

Shaft Encoder L (OUT B) - D16, (PDI/PCINT2/MOSI) PB2

Shaft Encoder R (OUT A) - D15, (PCINT1/SCLK) PB1

Shaft Encoder R (OUT B) - D17, (SS/PCINT0) PB0


Outputs from shaft encoders need to be read using pin change interrupts. 


Gear Sens L - D2, (SDA/INT1) PD1

Gear Sens R - D3, (OC0B/SCL/INT0) PD0


Hall effect sensor outputs can be read using analogRead. 

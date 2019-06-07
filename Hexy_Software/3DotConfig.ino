void Init3DoT() {     
  // Motor Driver = OUTPUT
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(PWMA,OUTPUT);
  pinMode(STBY,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);
  pinMode(PWMB,OUTPUT);
/*
  // Ultrasonic Sensors
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
*/
  //Absolute phase encoder
  pinMode(phaR, INPUT_PULLUP);
  pinMode(phaL, INPUT_PULLUP);
  
  Serial.begin(9600);
}

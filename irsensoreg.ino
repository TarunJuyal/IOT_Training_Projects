int LED = 16; // Use the onboard Uno LED
int obstaclePin = 5;  // This is our input pin
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(obstaclePin, INPUT);
  Serial.begin(9600);  
}
void loop() {
  
  if (obstaclePin==LOW) //LOW means something is ahead, so illuminates the 13th Port connected LED
  {
    
    digitalWrite(LED, LOW);//Illuminates the 13th Port LED
  }
  else
  {
    
    digitalWrite(LED, HIGH);
  }
  
  delay(200);
  
}

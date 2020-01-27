int buzzer=10;
int trigPin=12;
int echoPin=11;
float duration;
float distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   int delayTime=2000;
   int soundSpeed=330;
   digitalWrite(trigPin,HIGH);
   delay(delayTime);
   digitalWrite(trigPin`,LOW);
   
   duration=pulseIn(echoPin,HIGH);
   distance=(soundSpeed*duration)/2;
   Serial.print("Distance is :");
   Serial.println(duration);
  if(distance<=50){
    tone(buzzer.1000);
    delay(2000);
    noTone(buzzer);
    delay(1000);
    
  }
   
}

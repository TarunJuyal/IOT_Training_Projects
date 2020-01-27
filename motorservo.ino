#include <Servo.h>
Servo servo;
int angle;
void setup(){
servo.attach(0);
}
void loop(){
for(angle = 0; angle < 90; angle += 1)   
  { servo.write(angle);                 
    delay(20);                       
  } 
  delay(1000);
  for(angle = 90  ; angle>=1; angle-=5)    
  { servo.write(angle);              
    delay(20);                       
  }}

#include<ESP8266WiFi.h>
const char* ssid="";
const char* password="";
int ledpin=D1;

void setup() {
 pinMode(ledpin,OUTPUT);
 digitalWrite(ledpin,LOW);

 Serial.begin(115200);
 Serial.println();
 Serial.println("wifi connection to");
 Serial.println(ssid);

 WiFi.begin(ssid,password);
 Serial.println();
 Serial.println("connecting");

 while(WiFi.status()!=WL_CONNECTED)
 {digitalWrite(ledpin,HIGH); 
  delay(500);
 Serial.print(".");

}
}

void loop() {
  // put your main code here, to run repeatedly:

}

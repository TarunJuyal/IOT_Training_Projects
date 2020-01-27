#include <Blynk.h>
#include <timer.h>
#include<SPI.h>
#include<DHT.h>
#include<ESP8266WiFi.h>
#include<BlynkSimpleESP8266.h>

char auth[]="";
char ssid[]="";
char pass[]="";

#define DHTPIN 4  // pin D2
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);
SimpleTimer timer;

void sendSensor(){
float h = dht.readHumidity();
float t = dht.readTemperature();       //Celsius
float t1 = dht.readTemperature(true);  //Fahrenheit
Blynk.virtualWrite(V0,t);
Blynk.virtualWrite(V1,h);
Blynk.virtualWrite(V2,t1);
}

void setup(){ 
 Serial.begin(9600);
 Blynk.begin(auth,ssid,pass);
 dht.begin();
 timer.setInterval(1000L,sendSensor);
}
void loop(){
  Blynk.run();
  timer.run();
}

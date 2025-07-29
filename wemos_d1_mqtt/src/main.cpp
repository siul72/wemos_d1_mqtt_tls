#include <Arduino.h>
#include <SoftwareSerial.h>
#include <TaskScheduler.h>
#include <ESP8266WiFi.h>
#include <ESP8266Ping.h>
#include <AsyncMqttClient.h>

// WiFi and MQTT settings
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";
const char* mqtt_server = "broker.hivemq.com";
 

void setup() {
    Serial.begin(115200);
   
}

void loop() {
    
}
 
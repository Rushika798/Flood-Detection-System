#include <SoftwareSerial.h>

char num1[]="+91798XXXXXXX";
int i;

#define sensorPower 7
#define sensorPin A0

// Value for storing water level
int val = 0;

void setup() {
    pinMode(sensorPower, OUTPUT);
    digitalWrite(sensorPower, LOW);
    Serial.begin(9600);
    Serial.println("AT\r");
    delay(500);
}

void loop() {
    int level = readSensor();

    if(level >= 300) {
        Serial.print("Flood Detected: ");
        Serial.println(level);
        delay(1000);
        Serial.print("ATD");
        Serial.print(num1);
        Serial.println(";\r\n");
        delay(100000);
    }
}

int readSensor() {
    digitalWrite(sensorPower, HIGH);
    delay(10);
    val = analogRead(sensorPin);
    digitalWrite(sensorPower, LOW);
    return val;
}
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEthernet.h>
#include <Servo.h>

char auth[] = "dTtYtowOkVeyZzWMXZrHcnzXLIoB3DMF";
char ssid[] = "itu";
char pass[] = "tabokmasaya";

Servo servo;

BLYNK_WRITE(V3)
{
  servo.write(param.asInt());
}

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth);

  servo.attach(D8);
}

void loop()
{
  Blynk.run();
}

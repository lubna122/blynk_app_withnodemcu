
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "2umVnTL7kB3NK82mpK4BaQ-mNpiCTmJk";
char ssid[] = "Mooazam";
char pass[] = "mooazam123";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}

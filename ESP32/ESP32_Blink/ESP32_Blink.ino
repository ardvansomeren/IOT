/*
  ESP32 Blink
  esp32-blink.ino
  Rewrite of classic Blink sketch for ESP32
  Use LED on GPIO2
   
  DroneBot Workshop 2020
  https://dronebotworkshop.com

  --> My ESP32 30PIN layout: https://circuits4you.com/2018/12/31/esp32-devkit-esp32-wroom-gpio-pinout/
  --> Boardmanager ESP32: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
  --> CP210x_Universal_Windows_Driver
*/

// LED on GPIO2
int ledPin = 2;

void setup()
{
    // Set LED as output
    pinMode(ledPin, OUTPUT);
    
    // Serial monitor setup
    Serial.begin(115200);

    // Sketch identification
    Serial.println("AVS1416  11/12/2021- ESP32_Blink.ino");
    delay(2000);
}

void loop()
{
    Serial.print("Hello");
    digitalWrite(ledPin, HIGH);
    
    delay(500);
    
    Serial.println(" world!");
    digitalWrite(ledPin, LOW);
    
    delay(500);
}

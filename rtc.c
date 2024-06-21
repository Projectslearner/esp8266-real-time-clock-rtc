/*
    Project name : ESP8266 Real time clock RTC
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-real-time-clock-rtc
*/

#include <Wire.h>       // Include Wire library for I2C communication
#include <RTClib.h>     // Include RTClib to work with the RTC module

RTC_DS3231 rtc;         // Create an instance of RTC_DS3231

void setup() {
  Serial.begin(9600);   // Initialize serial communication
  Wire.begin();         // Initialize I2C communication
  
  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }

  // Uncomment the next line if you need to set the RTC to the date and time compiled
  // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
}

void loop() {
  // Read the current date and time from the RTC
  DateTime now = rtc.now();
  
  // Print date and time to Serial Monitor
  Serial.print(now.year(), DEC);
  Serial.print('/');
  Serial.print(now.month(), DEC);
  Serial.print('/');
  Serial.print(now.day(), DEC);
  Serial.print(" ");
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.print(now.second(), DEC);
  Serial.println();
  
  delay(1000);   // Delay for 1 second before printing the next time
}

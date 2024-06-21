# ESP8266 Real-Time Clock (RTC) Project

#### Project Overview
This project guides you through setting up a real-time clock (RTC) using an ESP8266 microcontroller and the DS3231 RTC module. The RTC module accurately keeps track of time even when the microcontroller is powered off. The current date and time are retrieved from the RTC module and displayed on the Serial Monitor.

#### Components Needed
- **ESP8266 Microcontroller**
- **DS3231 RTC Module**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup
1. **Connecting the DS3231 RTC Module to ESP8266:**
   - Connect the SDA pin of the DS3231 module to the SDA (D2) pin on the ESP8266.
   - Connect the SCL pin of the DS3231 module to the SCL (D1) pin on the ESP8266.
   - Ensure proper power (VCC) and ground (GND) connections between the ESP8266 and the DS3231 module.

#### Instructions
1. **Setup:**
   - Include the required libraries (`Wire.h` for I2C communication and `RTClib.h` for interfacing with the RTC module).
   - Initialize serial communication at a baud rate of 9600.
   - Initialize I2C communication using `Wire.begin()`.
   - Check if the RTC module is detected using `rtc.begin()`. If not detected, an error message is printed.

2. **Operation:**
   - The current date and time are continuously read from the RTC module using `rtc.now()` in the `loop()` function.
   - Print the date and time to the Serial Monitor in the format "YYYY/MM/DD HH:MM:SS".
   - Adjust the RTC module's initial date and time by uncommenting and using `rtc.adjust()` if needed.

#### Applications
- **Clocks and Timers:** Use in applications requiring accurate timekeeping.
- **Data Logging:** Timestamp data readings for monitoring and analysis.
- **Automation:** Schedule tasks based on specific times or intervals.

#### Notes
- **RTC Accuracy:** The DS3231 RTC module provides high accuracy and maintains timekeeping even when not powered.
- **Power Backup:** Ensure proper power supply to the RTC module to maintain accurate timekeeping.
- **Serial Output:** Adjust the baud rate (`Serial.begin()`) as needed for optimal communication with the Serial Monitor.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Real-Time Clock RTC](https://projectslearner.com/learn/esp8266-real-time-clock-rtc)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
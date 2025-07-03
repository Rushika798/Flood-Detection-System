# Flood-Detection-System
# 🌊 Flood Detection System using Arduino & GSM

## 📖 Overview
This project detects rising water levels using an analog water level sensor and alerts users via a phone call using the GSM module.

## 🛠️ Components Used
- Arduino Mega / Uno
- GSM Module (SIM800L)
- Water Level Sensor
- Jumper Wires
- Power Supply (Battery or Adapter)

## 🔌 Circuit Connections
- Water Level Sensor → A0 (analog input)
- Sensor VCC → D7 (sensor powered via digital pin)
- GSM Module TX → Arduino RX (or use SoftwareSerial)
- GSM Module RX → Arduino TX
- GSM VCC → 4.2V regulated power

## 🚨 Functionality
- Monitors water level every few seconds.
- If the level crosses a defined threshold (300), initiates a phone call to a predefined number.

## 🧠 Future Improvements
- Add SMS notifications
- Use IoT cloud for logging data
- Mobile app integration

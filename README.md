# 🚪 Smart Garage Door using Arduino + Bluetooth + Ultrasonic + LCD + MIT App

This project details the development of an **intelligent garage door system** designed for **automation, safety, and convenience**.  
It uses an Arduino Uno with Bluetooth, ultrasonic sensing, an LCD, and a servo motor to allow **automatic and manual control** of the garage door. A custom **MIT App Inventor Android app** provides mobile control.

---

## 📖 Abstract
The system enables **automated garage door opening** when a vehicle is detected within 50 cm, while still allowing manual override using a Bluetooth app.  
Real-time distance feedback is provided on a 16x2 I2C LCD for user awareness.

---

## 🛠️ Core Components
- Arduino Uno (Microcontroller)  
- HC-SR04 Ultrasonic Sensor (Distance measurement)  
- SG90 Servo Motor (Door actuation)  
- 16x2 I2C LCD (Real-time display)  
- HC-05 Bluetooth Module (Wireless communication)  
- MIT App Inventor Android App (Manual control interface)  

  ### System Architecture / Circuit Diagram
             


---

## ⚡ Operational Logic
1. **Automatic Mode** → Garage door opens when an object is detected within 50 cm.  
2. **Manual Mode** → User can send Bluetooth commands:
   - `'1'` → Open door  
   - `'0'` → Close door  
3. **LCD Display** → Shows real-time distance from ultrasonic sensor.  
   ### Arduino Hardware Setup
         

---

## 📱 MIT App Inventor App
- Developed using **MIT App Inventor 2**.  
- Simple interface with **ON/OFF buttons**:  
  - **ON** → Sends `'1'` to Arduino via Bluetooth.  
  - **OFF** → Sends `'0'`.  
- Uses `BluetoothClient` component for connection.  
- Real-time control, no coding required, beginner-friendly.  
  ### MIT App Inventor Mobile App
          

*(You can upload `.apk` and `.aia` files into a `/MobileApp/` folder in this repo for others to try your app.)*  

---

## 📊 Applications
- Smart homes for **automated garages**.  
- **Obstacle detection** and safety systems.  
- Automated doors in malls/offices.  
- Parking assistance in vehicles.  
- Foundation for IoT-enabled access systems.  

---

## ✅ Advantages
- Automatic + manual control flexibility.  
- Low cost, easy to build with Arduino.  
- User-friendly Android app control.  
- Can be scaled to other automation projects.  

---

## ⚠️ Limitations
- Ultrasonic sensor limited to ~4m range.  
- Servo provides only single-axis motion.  
- Accuracy affected by environment (temperature, dust).  

---

## 🚀 Future Scope
- Add **IoT/cloud connectivity** for remote access.  
- Use **multi-axis motors** for more realistic door motion.  
- Integrate **PIR, IR, or camera sensors** for better security.  
- Add **voice control** with Alexa/Google Assistant.  
---

## 👨‍💻 Author
**Tanish Verma**  
B.Tech, Electronics & Telecommunication Engineering (E&TC)  
Symbiosis Institute of Technology  

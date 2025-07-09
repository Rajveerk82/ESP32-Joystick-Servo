# 🎮 ESP32 Joystick Controlled Servo (Wokwi Simulation)

This project simulates a joystick-controlled servo motor using an ESP32, with real-time angle display on an I2C LCD.

Built and tested in [Wokwi Online Simulator](https://wokwi.com).

---

## 🔗 Live Simulation

👉 [Click to Run on Wokwi](https://wokwi.com/projects/435985700299376641)

---

## 🧰 Components Used

- ESP32 Dev Board
- Joystick Module (Analog)
- Servo Motor (SG90)
- I2C 16x2 LCD Display

---

## 🔌 Circuit Connections

| Component       | ESP32 Pin |
|----------------|-----------|
| Joystick VRx   | GPIO 25   |
| Servo Signal   | GPIO 18   |
| LCD SDA        | GPIO 21   |
| LCD SCL        | GPIO 22   |
| All GNDs       | GND       |
| All VCCs       | 3.3V or 5V|

---

## 🧠 How It Works

- Analog joystick input is read from GPIO 25
- The input is mapped from 0–4095 to a servo angle (0–180°)
- The angle is written to the servo using `ESP32Servo`
- The current angle is displayed on a 16x2 LCD

---

## 📁 Files Included

- `project.ino` - Arduino sketch for ESP32
- `diagram.json` - Wokwi virtual wiring configuration

---

## 📸 Preview

![Circuit Diagram](https://i.ibb.co/N2y8LwBQ/Screenshot-2025-07-09-141724.png)

---

## 🚀 Try It Yourself

Run it directly in the Wokwi simulator — no hardware needed!

> Great for showcasing on your resume, LinkedIn, or in interviews.

# ESP32-Joystick-Servo
ESP32 project to control a servo motor using a joystick and display angle on LCD.
# 🎮 ESP32 Joystick Controlled Servo

This project uses a joystick to control a servo motor using an ESP32 board. It also displays the current servo angle on a 16x2 I2C LCD.

## 🛠️ Components Used
- ESP32 Dev Board
- Joystick Module
- Servo Motor (SG90)
- 16x2 I2C LCD Display
- Jumper Wires

## 🔌 Connections
| Component | ESP32 Pin |
|-----------|-----------|
| Joystick VRx | GPIO 25 |
| Servo Signal | GPIO 18 |
| LCD SDA      | GPIO 21 |
| LCD SCL      | GPIO 22 |

## 📷 Preview
![Wiring Diagram](images/circuit_diagram.jpg)

## 💻 Code Location
See the `code/joystick_servo_lcd.ino` file.

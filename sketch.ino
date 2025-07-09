#include <ESP32Servo.h>
#include <LiquidCrystal_I2C.h>

// LCD setup (I2C address, columns, rows)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin definitions
const int servoPin = 18;
const int joyPin = 25;

// Servo object
Servo myServo;

void setup() {
  Serial.begin(115200);

  // Initialize LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Initializing...");

  // Attach servo
  myServo.attach(servoPin);

  delay(500);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Connected!");
  Serial.println("Successfully Connected!");
  delay(1000);
}

void loop() {
  int joystickValue = analogRead(joyPin);
  int angle = map(joystickValue, 0, 4095, 0, 180);
  myServo.write(angle);

  // Clear and update LCD efficiently
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Joystick: ");
  lcd.print(joystickValue);

  lcd.setCursor(0, 1);
  lcd.print("Angle: ");
  lcd.print(angle);
  lcd.print((char)223); // Degree symbol

  // Serial Monitor Output
  Serial.print("Joystick: ");
  Serial.print(joystickValue);
  Serial.print(" | Angle: ");
  Serial.println(angle);

  delay(150); // Slightly longer delay to reduce LCD flicker
}

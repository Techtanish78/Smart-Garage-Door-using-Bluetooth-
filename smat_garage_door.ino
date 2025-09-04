#include <LiquidCrystal_I2C.h>
#include <Servo.h>

const int servo_pin = 11;
const int trig_pin  = 10;
const int echo_pin  = 9;

float duration, distance;
char Incoming_value = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo Servo1;

void setup() {
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Servo1.attach(servo_pin);
  Servo1.write(41);   // initial position (closed)

  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop() {
  // ====== BLUETOOTH CONTROL ======
  if (Serial.available() > 0) {
    Incoming_value = Serial.read();
    Serial.println(Incoming_value);

    if (Incoming_value == '1') {
      Servo1.write(139);  // open
      delay(2000);
    }
    else if (Incoming_value == '0') {
      Servo1.write(41);   // close
      delay(2000);
    }
  }

  // ====== ULTRASONIC SENSOR ======
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  duration = pulseIn(echo_pin, HIGH);
  distance = (duration * 0.0343) / 2;

  // ====== LCD DISPLAY ======
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print(" cm");

  // ====== AUTO CONTROL ======
  if (distance <= 50) {
    Servo1.write(139); // open
    delay(3000);
  } else {
    Servo1.write(41);  // close
    delay(1000);
  }
}

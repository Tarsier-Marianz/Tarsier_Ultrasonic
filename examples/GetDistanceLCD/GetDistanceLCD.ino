#include "Tarsier_Ultrasonic.h"
#include "LiquidCrystal.h"

//ultrasonic pin configuration
const int TRIG_PIN  = 6;
const int ECHO_PIN  = 7;
//LCD pin configuration
const int RS_PIN    = 12;
const int EN_PIN    = 11;
const int D4_PIN    = 5;
const int D5_PIN    = 4;
const int D6_PIN    = 3;
const int D7_PIN    = 2;

Tarsier_Ultrasonic _hcSR04_Sensor(TRIG_PIN, ECHO_PIN);
LiquidCrystal _lcd(RS_PIN, EN_PIN, D4_PIN, D5_PIN, D6_PIN, D7_PIN);

void setup() {
  _lcd.begin(20, 4);
  //_hcSR04_Sensor.setPins(TRIG_PIN, ECHO_PIN);     // alternative way of pin configuration
}

void loop() {
  long distanceCm = _hcSR04_Sensor.getDistanceCm();
  _lcd.clear();
  _lcd.setCursor(0, 0);
  _lcd.print(distanceCm);
  _lcd.print("cm");
  delay(100);
}
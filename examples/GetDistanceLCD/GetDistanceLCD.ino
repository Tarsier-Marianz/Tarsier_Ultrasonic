
#include "Tarsier_Ultrasonic.h"
#include "LiquidCrystal.h"

const int TRIG_PIN    = 6;
const int ECHO_PIN    = 7;

Tarsier_Ultrasonic _hcSR04_Sensor(TRIG_PIN, ECHO_PIN);
LiquidCrystal _lcd(12, 11, 5, 4, 3, 2);

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
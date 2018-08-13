#include "Tarsier_Ultrasonic.h"

const int TRIG_PIN    = 6;
const int ECHO_PIN    = 7;

Tarsier_Ultrasonic _hcSR04_Sensor(TRIG_PIN, ECHO_PIN);

void setup() {
  Serial.begin(9600);
  //_hcSR04_Sensor.setPins(TRIG_PIN, ECHO_PIN);     // alternative way of pin configuration
}

void loop() {
  long distanceCm = _hcSR04_Sensor.getDistanceCm();
  Serial.print("Distance in Centimeter: ");
  Serial.println(distanceCm);
}
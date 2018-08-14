/*
 * GetDistance
 * Prints the distance read by an ultrasonic sensor in
 * centimeters.  
 *
 * The circuit:
 * * Module HR-SC04 four pins configuration to Arduino,
 * attached to digital pins as follows:
 * --------------------- 
 * | HC-SC04 | Arduino |
 * ---------------------
 * |   Vcc   |   5V    |
 * |   Trig  |   6     |
 * |   Echo  |   7     |
 * |   Gnd   |   GND   |
 * ---------------------
 * NOTE: You can change pin number connections you preferred.
 *       To get distance in inches, use getDistanceInch(); method
 */
 
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
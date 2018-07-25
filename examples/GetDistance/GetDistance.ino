#include "Tarsier_Ultrasonic.h"

Tarsier_Ultrasonic _hcSR04_Sensor(6,7);

void setup()
{
    Serial.begin(9600);
    //_hcSR04_Sensor.setPins(6, 7);
}

void loop()
{
    long distanceCm = _hcSR04_Sensor.getDistanceCm();
    Serial.print("Distance in Centimeter: ")
        Serial.println(distanceCm)
}
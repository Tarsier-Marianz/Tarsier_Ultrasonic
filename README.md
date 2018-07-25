# Tarsier Ultrasonic

A minimal *Arduino library* for **HC-SR04** Ultrasonic sensor.

## Documentation

- `Tarsier_Ultrasonic()` <br> Default constructor, selects the
  default pins as connected by the digital pins *6* and *7*.
- `Tarsier_Ultrasonic(byte trigPin, byte echoPin)` <br>
  Alternate constructor for connections remapped by user on its desired configuration.
- `void setPins(byte trigPin, byte echoPin)` <br> Another alternate way to configure pin connection of the Arduino board to ultrasonic sensor.
- `long getDistanceInch()` <br> function to get the distance of an object in inches.
- `long getDistanceCm()` <br> function to get the distance of an object in centimeters.

## Example
A simple demo on how to use this libray, or see [example](https://github.com/Tarsier-Marianz/Tarsier_Ultrasonic/tree/master/examples) folder of this repo.
```c++

#include "Tarsier_Ultrasonic.h"

int TRIG_PIN    = 6;
int ECHO_PIN    = 7;

Tarsier_Ultrasonic _hcSR04_Sensor(TRIG_PIN, ECHO_PIN);

void setup(){
    Serial.begin(9600);
    // alternate way of pin configuration
    // if not set (trig & echo pins) in constructor
    //_hcSR04_Sensor.setPins(TRIG_PIN, ECHO_PIN);
}

void loop(){
    long distanceCm = _hcSR04_Sensor.getDistanceCm();
    //long distanceInc = _hcSR04_Sensor.getDistanceInch();
    Serial.print("Distance in Centimeter: ");
    Serial.println(distanceCm);
}

```

## References
Thanks to [tutorialspoint.com](https://www.tutorialspoint.com/arduino/arduino_ultrasonic_sensor.htm) for their tutorials on how to use **HC-SR04** Ultrasonic sensor on Arduino.

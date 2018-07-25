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


## References
Thanks to [tutorialspoint.com](https://www.tutorialspoint.com/arduino/arduino_ultrasonic_sensor.htm) for their tutorials on how to use **HC-SR04** Ultrasonic sensor on Arduino.

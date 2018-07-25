/*
* Tarsier_Ultrasonic.cpp
*
* Created: 07/25/2018 12:07:32 PM
* Author: TARSIER
*/

#include "Tarsier_Ultrasonic.h"
#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

// default constructor
Tarsier_Ultrasonic::Tarsier_Ultrasonic()
{
  this->setPins(TRIG_PIN, ECHO_PIN);
}

Tarsier_Ultrasonic::Tarsier_Ultrasonic(byte trigPin, byte echoPin)
{
  this->setPins(trigPin, echoPin);
} //Tarsier_Ultrasonic

void Tarsier_Ultrasonic::setPins(byte trigPin, byte echoPin)
{
  this->_trigPin = trigPin;
  this->_echoPin = echoPin;
  pinMode(this->_trigPin, OUTPUT);
  pinMode(this->_echoPin, INPUT);
}

void Tarsier_Ultrasonic::ping()
{
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:

  digitalWrite(this->_trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(this->_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(this->_trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  this->durationInMicroseconds = pulseIn(this->_echoPin, HIGH);
}

long Tarsier_Ultrasonic::getDistanceInch()
{
  this->ping();
  //return this->durationInMicroseconds / 74 / 2;
  return this->durationInMicroseconds *  0.0133 / 2;       //using reference from https://howtomechatronics.com/
}

long Tarsier_Ultrasonic::getDistanceCm()
{
  this->ping();
  //return this->durationInMicroseconds / 29 / 2;
  return this->durationInMicroseconds * 0.034 / 2;        //using reference from https://howtomechatronics.com/
}


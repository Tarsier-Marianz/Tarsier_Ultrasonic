/* 
* Tarsier_Ultrasonic.h
*
* Created: 07/25/2018 12:07:32 PM
* Author: TARSIER
*/

#ifndef __Tarsier_Ultrasonic_H__
#define __Tarsier_Ultrasonic_H__

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <Wire.h>

#define TRIG_PIN 6 // set default trigger pin to digital pin6
#define ECHO_PIN 7 // set default trigger pin to digital pin7

class Tarsier_Ultrasonic
{	
  public : 
    Tarsier_Ultrasonic();
	Tarsier_Ultrasonic(byte trigPin, byte echoPin);
	void setPins(byte trigPin, byte echoPin);
	
	//-- distance data read functions --
	long getDistanceInch();
	long getDistanceCm();

  protected:
  private:	
	byte _trigPin;
	byte _echoPin;
	long durationInMicroseconds;
	void ping();

}; //Tarsier_Ultrasonic

#endif //__Tarsier_Ultrasonic_H__

#ifndef GroveSlidePotentiometer_H
#define GroveSlidePotentiometer_H

#include <Arduino.h>
#include "../Grove/Grove.h"
#include <GroveLED.h>

class GroveLightSensor {
	private:
		unsigned int _pinSensor; 
		unsigned int _maxMesurement;
	
	protected:
		unsigned int _performMesurement(); 

	public:
		GroveLightSensor(GrovePin pins, unsigned int _maxMesurement = 761);
		virtual ~GroveLightSensor() {};
		void initialize();
		float getIntensity();
		void setMaxMesurement(float maxPosition);
};

#endif
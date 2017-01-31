#ifndef GroveSlidePotentiometer_H
#define GroveSlidePotentiometer_H

#include <Arduino.h>
#include <Grove.h>
#include <GroveLED.h>

class GroveLightSensor {
	private:
		unsigned int _pinSensor; 
		unsigned int _maxMesurement;
	
	protected:
		unsigned int _performMesurement(); 

	public:
		GroveLightSensor();
		virtual ~GroveLightSensor() {};
		void initialize(GrovePin pins, unsigned int maxMesurement = 761);
		float getIntensity();
		void setMaxMesurement(unsigned int maxMesurement);
};

#endif
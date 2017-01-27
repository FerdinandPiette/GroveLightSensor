#include "GroveLightSensor.h"

GroveLightSensor::GroveLightSensor(GrovePin pins, unsigned int maxMesurement) {
	this->_pinSensor = pins.pin1;
	this->setMaxMesurement(maxMesurement);
}

void GroveLightSensor::initialize() {}

unsigned int GroveLightSensor::_performMesurement() {
	return analogRead(this->_pinSensor);
}

float GroveLightSensor::getIntensity() {
	unsigned int value = this->_performMesurement();
	float position = (float)value / this->_maxMesurement;
	if(position > 1) { position = 1; } else if(position < 0) { position = 0; }
	return position;
}

void GroveLightSensor::setMaxMesurement(unsigned int maxMesurement) {	
	this->_maxMesurement = maxMesurement;
}

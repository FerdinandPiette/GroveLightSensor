# GroveLightSensor
Light Sensor Library for Arduino + Grove shield

[Link to the tested grove module](http://wiki.seeed.cc/Grove-Light_Sensor/)

##Example
```c++
#include <GroveLightSensor.h>

GroveLightSensor lightSensor;

void setup() {
  lightSensor.initialize(GROVE_A3);
  Serial.begin(9200);
}

void loop() {
  Serial.println(lightSensor.getIntensity());
  delay(500);
}
```

##Documentation

###`void initialize(GrovePin pins, unsigned int maxMesurement = 761)`
Initialize the sensor before using it.

Parameters:
- `pins`: Must be a analog socket (GROVE_A0 to GROVE_A3)
- `maxMesurement`: A number between 0 and 1024 corresponding the the maximum light intensity at the output of the A/D sensor

###`float getIntensity()`
Return the intensity of the light from 0 (no light) to 1 (maximum intensity).

###`void setMaxMesurement(unsigned int maxMesurement)`
Set the maximum value the light intensity.

Parameters:
- `maxMesurement`: A number between 0 and 1024 corresponding the the maximum light intensity at the output of the A/D sensor

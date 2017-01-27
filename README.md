# GroveLightSensor
Light Sensor Library for Arduino + Grove shield

[Link to the tested grove module](http://wiki.seeed.cc/Grove-Light_Sensor/)

##Example
```c++
#include <Grove.h>
#include <GroveLightSensor.h>

GroveLightSensor lightSensor(GROVE_A3);

void setup() {
  lightSensor.initialize();
  Serial.begin(9200);
}

void loop() {
  Serial.println(lightSensor.getIntensity());
  delay(500);
}
```

##Documentation

###`GroveLightSensor(GrovePin pins, unsigned int maxMesurement = 761)`
Parameters:
- `pins`: Must be a analog socket (GROVE_A0 to GROVE_A3)
- `maxMesurement`: A number between 0 and 1024 corresponding the the maximum light intensity at the output of the A/D sensor

###`void initialize()`
Initialize the sensor before using it.

###`float getIntensity()`
Return the intensity of the light from 0 (no light) to 1 (maximum intensity).

###`void setMaxMesurement(unsigned int maxMesurement)`
Set the maximum value the light intensity.

Parameters:
- `maxMesurement`: A number between 0 and 1024 corresponding the the maximum light intensity at the output of the A/D sensor

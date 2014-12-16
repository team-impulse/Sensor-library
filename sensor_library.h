/* (C) Team Impulse 2014
 * Made available under a modification of the MIT license - see repository root.
 * Sensor library; MS5637 and HYT-271.
 */

 #ifndef SENSOR_LIB
 #define SENSOR_LIB

 #include <Arduino.h>

 #define ms_addr 0x76
 #define hyt_addr 0x28

 class SENSOR_LIB {
 public:
   int16_t internal_temperature;
   int16_t external_temperature;
   int16_t humidity;
   int32_t pressure;

   void pollMS5637();
   void pollHYT271();
   void initialise();
private:
  uint16_t calib[7];

 }

#endif

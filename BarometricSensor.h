/* (C) Team Impulse 2014
 * MS5637BA combined temperature and pressure sensor driver code
 * Made available under a modified MIT license - see GitHub repository.
 * (Teensy 3.1)
 * Based on datasheet at http://www.meas-spec.com/downloads/MS5637-02BA03.pdf
 */
#ifndef BarometricSensor_h //Prevents problem if library is included twice.
#define BarometricSensor_h

  #include "Arduino.h"
  class BarometricSensor{
    public:
      BarometricSensor(float pressure, int_temp);
      BarometricSensor(int reg, calib); //calib may not actually be an int variable. Should probably look into that :/
      void processBaroData();
      void readRawTPValues;
      void barometerCalibration();
      
    private:
  };

#endif

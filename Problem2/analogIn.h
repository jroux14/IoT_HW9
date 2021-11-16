#ifndef ANALOGIN_H_
#define ANALOGIN_H_

#include<string>

using namespace std;

const std::string ADC_PATH = "/sys/bus/iio/devices/iio:device0/in_voltage";

class AnalogIn{
     private:
          unsigned int number;
     public:
	  std::string path;
          AnalogIn();
          AnalogIn(unsigned int n);
          virtual unsigned int getNumber() {return number; } // inline function implementation.
          virtual void setNumber(unsigned int n);
	  virtual int readADCsample();
	  virtual ~AnalogIn();
};

#endif /* ANALOGIN_H_ */

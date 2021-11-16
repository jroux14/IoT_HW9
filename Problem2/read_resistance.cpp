#include "analogIn.h"
#include <iostream>
#include <sstream>
#include <fstream>

int main(int argc, char* argv[]){
	cout.precision(4);
	double r1 = 10000.0;
	double vIn = 1.8;
	double adcMax = 4096.0;
	double adcRatio = adcMax/vIn;

	AnalogIn adcPin = AnalogIn(0);
	int adcValue = adcPin.readADCsample();

	double vOut = adcValue/adcRatio;
	cout << vOut << endl;
	double r2Num = vOut*r1;
        double r2Denom = vIn-vOut;
        double r2 = r2Num/r2Denom;

	cout << "The ADC value on pin 0 is " << adcPin.readADCsample() << endl;
	cout << "The value of R2 = " << r2 << "ohms" << endl;

	return 0;
}

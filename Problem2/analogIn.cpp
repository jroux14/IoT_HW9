#include "analogIn.h"
#include <iostream>
#include <sstream>
#include <fstream>

AnalogIn::AnalogIn(){}

AnalogIn::AnalogIn(unsigned int n){
     number = n;
     stringstream ss;
     ss << ADC_PATH << number << "_raw";
     path = ss.str().c_str();
}

void AnalogIn::setNumber(unsigned int n){
     number = n;
}

int AnalogIn::readADCsample(){
   int num;
   fstream fs;
   fs.open(path, fstream::in);
   fs >> num;
   fs.close();
   return num;
}

AnalogIn::~AnalogIn(){}


#ifndef AnalogPin_h
#define AnalogPin_h

#include "Arduino.h"

class AnalogOutPin {
public:
    AnalogOutPin(int pin);
    void setIntensity(int percent);
    void turnOff();
    void turnOn();
    void setup();
    bool isOn();

private:
    int _pinNumber;
    bool _pinState;
};

class AnalogInputPin {
public:
    AnalogInputPin(int pin);
    void setup();
    int read();
    int readAsDigital();

private:
    int _pinNumber;
};

#endif
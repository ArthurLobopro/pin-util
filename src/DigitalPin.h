#ifndef DigitalPin_h
#define DigitalPin_h

#include "Arduino.h"

class DigitalOutPin {
public:
    DigitalOutPin(int pin);
    void turnOn();
    void turnOff();
    void setup();
    bool isOn();

private:
    int _pinNumber;
    bool _pinState;
};

class DigitalInputPin {
public:
    DigitalInputPin(int pin);
    void setup();
    int read();
    int readAsAnalog();

private:
    int _pinNumber;
};

#endif

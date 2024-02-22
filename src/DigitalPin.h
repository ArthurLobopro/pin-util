#ifndef DigitalPin_h
#define DigitalPin_h

#include "Arduino.h"

class DigitalOutPin {
  public:
    DigitalOutPin(int pinNumber); 
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
    DigitalInputPin(int pinNumber);
    int read();
    void setup();

  private:
    int _pinNumber;
};

#endif

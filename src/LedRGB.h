#ifndef  LedRGB_h
#define LedRGB_h

#include "Arduino.h"

class LedRGB {
public:
    LedRGB(int pinRed, int pinGreen, int pinBlue);
    void setup();
    void rgb(int red, int green, int blue);
    void turnOff();
    void turnOn();
    bool isOn();
private:
    int _pinRed;
    int _pinGreen;
    int _pinBlue;
    int _redValue;
    int _greenValue;
    int _blueValue;
    bool _isOn;
};

#endif
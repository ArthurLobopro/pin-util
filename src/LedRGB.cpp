#include "LedRGB.h"

LedRGB::LedRGB(int pinRed, int pinGreen, int pinBlue){
    _pinRed = pinRed;
    _pinGreen = pinGreen;
    _pinBlue = pinBlue;
    _redValue = 255;
    _greenValue = 255;
    _blueValue = 255;
    _isOn = false;
}

void LedRGB::setup(){
    pinMode(_pinRed, OUTPUT);
    pinMode(_pinGreen, OUTPUT);
    pinMode(_pinBlue, OUTPUT);
}

void LedRGB::turnOn(){
    analogWrite(_pinRed, _redValue);
    analogWrite(_pinGreen, _greenValue);
    analogWrite(_pinBlue, _blueValue);
    _isOn = true;
}

void LedRGB::turnOff(){
    analogWrite(_pinRed, 0);
    analogWrite(_pinGreen, 0);
    analogWrite(_pinBlue, 0);
    _isOn = false;
}

void LedRGB::rgb(int red, int green, int blue){
    _redValue = red;
    _greenValue = green;
    _blueValue = blue;
    
    if(_isOn){
        turnOn();
    }
}

bool LedRGB::isOn(){
    return _isOn;
}
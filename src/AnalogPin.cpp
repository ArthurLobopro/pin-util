#include "AnalogPin.h"

AnalogOutPin::AnalogOutPin(int pin) {
    _pinNumber = pin;
}

void AnalogOutPin::turnOn() {
    analogWrite(_pinNumber, HIGH);
    _pinState = HIGH;
}

void AnalogOutPin::turnOff() {
    analogWrite(_pinNumber, LOW);
    _pinState = LOW;
}

void AnalogOutPin::setup() {
    pinMode(_pinNumber, OUTPUT);
}

void AnalogOutPin::setIntensity(int percent) {
    const int value = static_cast<int>(255 * percent / 100);
    analogWrite(_pinNumber, value);
    _pinState = value;
}

bool AnalogOutPin::isOn() {
    return _pinState > 0;
}

AnalogInputPin::AnalogInputPin(int pin) {
    _pinNumber = pin;
}

void AnalogInputPin::setup() {
    pinMode(_pinNumber, INPUT);
}

int AnalogInputPin::read() {
    return analogRead(_pinNumber);
}

int AnalogInputPin::readAsDigital() {
    return digitalRead(_pinNumber);
}
#include "DigitalPin.h"

DigitalOutPin::DigitalOutPin(int pinNumber) {
    _pinNumber = pinNumber;
    _pinState = LOW;
}

void DigitalOutPin::turnOn() {
    digitalWrite(_pinNumber, HIGH);
    _pinState = HIGH;
}

void DigitalOutPin::turnOff() {
    digitalWrite(_pinNumber, LOW);
    _pinState = LOW;
}

void DigitalOutPin::setup() {
    pinMode(_pinNumber, OUTPUT);
}

bool DigitalOutPin::isOn() {
    return _pinState == HIGH;
}

DigitalInputPin::DigitalInputPin(int pinNumber) {
    _pinNumber = pinNumber;
}

void DigitalInputPin::setup() {
    pinMode(_pinNumber, INPUT);
}

int DigitalInputPin::read() {
    return digitalRead(_pinNumber);
}

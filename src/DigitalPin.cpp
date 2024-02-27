#include "DigitalPin.h"

DigitalOutPin::DigitalOutPin(int pin) {
    _pinNumber = pin;
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

DigitalInputPin::DigitalInputPin(int pin) {
    _pinNumber = pin;
}

void DigitalInputPin::setup() {
    pinMode(_pinNumber, INPUT);
}

int DigitalInputPin::read() {
    return digitalRead(_pinNumber);
}

int DigitalInputPin::readAsAnalog(){
    return analogRead(_pinNumber);
}
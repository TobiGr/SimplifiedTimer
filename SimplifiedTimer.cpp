//
// Created by kiryanenko on 05.10.19.
// Modified by tobigr on 17.01.24.
//

#include "SimplifiedTimer.h"

SimplifiedTimer::SimplifiedTimer(uint64_t interval) : _interval(interval) {
    _start = millis();
    _enabled = true;
}

bool SimplifiedTimer::isReady() {
    return _enabled && _start + _interval <= millis();
}

void SimplifiedTimer::setInterval(uint64_t interval) {
    _interval = interval;
}

void SimplifiedTimer::reset() {
    _start = millis();
}

void SimplifiedTimer::disable() {
    _enabled = false;
}

void SimplifiedTimer::enable() {
    _enabled = true;
}

bool SimplifiedTimer::isEnabled() {
    return _enabled;
}


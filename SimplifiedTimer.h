//
// Created by kiryanenko on 05.10.19.
// Modified by tobigr on 17.01.24.
//

#ifndef SIMPLIFIED_TIMER_h
#define SIMPLIFIED_TIMER_h

#include <Arduino.h>

class SimplifiedTimer {
    uint64_t _start;
    uint64_t _interval;
    bool _enabled = true;

public:
    /// Constructor, that initialize timer
    /// \param interval An interval in msec
    explicit SimplifiedTimer(uint64_t interval = 0);
    /// Check if timer is ready
    /// \return True if is timer is ready and enabled
    bool isReady();
    /// Set the time interval
    /// \param interval An interval in msec
    void setInterval(uint64_t interval);
    /// Reset a timer
    void reset();
    /// Disable the timer. It will not be ready although the time is up
    void disable();
    /// Enable the timer. A disabled timer is enabled again
    void enable();
    /// Check if the timer is enabled
    bool isEnabled();
};


#endif // SIMPLIFIED_TIMER_h

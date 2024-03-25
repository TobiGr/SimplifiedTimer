//
// Created by kiryanenko on 05.10.19.
// Modified by tobigr on 17.01.24.
//

#ifndef SIMPLIFIED_TIMER_h
#define SIMPLIFIED_TIMER_h

#include <Arduino.h>

class SimplifiedTimer {
  private:
    uint64_t _start;
    uint64_t _duration;
    bool _enabled = true;
  public:
    /*!
     * Constructor that initializes the timer.
     * @param duration the duration in ms for the timer to take until it is up
     */
    explicit SimplifiedTimer(uint64_t duration = 0);
    /*!
     * Check if timer is up and enabled.
     * @return True if is timer is up and enabled
     */ 
    bool isReady();
    /*!
     * Set the duration for the timer to take until it is up.
     * @param param duration a duration in ms
     */ 
    void setInterval(uint64_t duration);
    /*!
     * Reset the timer.
     * It will take the specified duration until the timer is ready again. 
     */
    void reset();
    /*!
     * Disable the timer. It will not be ready although the time is up.
     */
    void disable();
    /*!
     * Enable the timer. A disabled timer is enabled again. The timer might be ready immideatly.
     */ 
    void enable();
    /*!
     * Check if the timer is enabled.
     * @return true if the timer is enabled, otherwise false
     */ 
    bool isEnabled();
};


#endif // SIMPLIFIED_TIMER_h

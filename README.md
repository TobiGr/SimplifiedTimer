Simple Arduino Timer
====================

A simple Arduino library to work with time.

## API
### Class `SimplifiedTimer`
#### Constructor
`SimplifiedTimer(uint64_t interval)`: Creates a new timer instance with the given interval in ms. The timer is enabled by default.
#### Methods
`bool isReady()`: Check if timer is ready. Returns `true` if the timer is ready
`void setInterval(uint64_t interval)`: Set the timer's interval. 
`void setInterval(uint64_t interval)`: Set the timer interval. Param `interval` is the interval in ms
`void reset()`: Reset the timer. It will be ready again once the set interval has passed.
`void disable()`: Disable the timer. It will not be ready although the time is up.
`void enable()`: Enable the timer. A disabled timer is enabled again


## Example

```cpp
#include <SimplifiedTimer.h>

// Create a first timer and specify its interval in milliseconds
SimplifiedTimer firstTimer(2000);
// Create a second timer
SimplifiedTimer secondTimer;

void setup()
{
    Serial.begin(9600);

    // Set an interval to 3 secs for the second timer
    secondTimer.setInterval(3000);
}

void loop()
{
    if (firstTimer.isReady()) {            // Check is ready a first timer
        Serial.println("2 seconds have passed");
        // Do something ...

        // Disable this timer until it gets enabled again
        firstTimer.disable();
    }

    if (secondTimer.isReady()) {                    // Check if second timer is ready
        Serial.println("Called every 3 sec");
        // Do something ...

        firstTimer.enable();                        // Enable the first timer again
        firstTimer.reset();                         // Reset the first timer to let it wait another 2 seconds

        secondTimer.reset();                        // Reset the second timer
        
    }
}
```

# License
This library is a fork of [SimpleTimer](https://github.com/kiryanenko/SimpleTimer) which was originally released by Alexander Kiryanenko under the MIT license.

Copyright (c) 2019 Alexander Kiryanenko.
Copyright (c) 2024 Tobias Groza.

Licensed under the MIT license.

  
#ifndef SL06_h
#define SL06_h
#include "pxt.h"
#include "Pin.h"
#include "I2C.h"
#ifndef byte
typedef uint8_t byte;
#endif

class SL06Class
{
public:
    SL06Class();
    int delay(uint32_t time_ms);
};
#endif

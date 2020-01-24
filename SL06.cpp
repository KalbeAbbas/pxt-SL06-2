#include "SL06.h"

using namespace pxt;

// function prototypes


SL06Class::SL06Class()
{
}

int SL06Class::delay(uint32_t time_ms)
{
#ifdef CODAL_I2C
    sleep_ms(time_ms);
#else
    uBit.sleep(time_ms);
#endif

return 1;
}

namespace SL06
{
static SL06Class *ptr = new SL06Class;
    
//%
int delay(uint32_t time_ms)
{
  ptr->delay(time_ms);
}
} // namespace xSL06
 

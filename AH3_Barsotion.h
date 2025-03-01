#pragma once

#include "AH3_Interface.h"
#include "AH3_RegMap.h"


class AH3_t
{
private:
    void waitTillBusy();
public:
    AH3_t(int sda, int scl);
    uint8_t getWhoAmI();
    uint8_t getSoftRevision();
    
    float getTemp1();
    float getPres1();
    float getTemp2();
    float getPres2();
    float getAspeed();
    float getAlt();
    float getVspeed();
};

#pragma once

#include "AH3_Interface.h"
#include "AH3_RegMap.h"

typedef enum {
    AH3_FLAG_BMP1 = 0b00001,
    AH3_FLAG_BMP2 = 0b00010,
    AH3_FLAG_FILTER_BMP1 = 0b00101,
    AH3_FLAG_FILTER_BMP2 = 0b01010,
    AH3_FLAG_AIR_SPEED = 0b11111,
} AH3_InitFlags_t;


class AH3_t
{
private:
    void waitTillBusy();
public:
    AH3_t(int sda, int scl);
    void init(AH3_InitFlags_t flags);
    void init();
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

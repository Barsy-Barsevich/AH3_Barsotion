#include "AH3_Barsotion.h"


AH3_t::AH3_t(int sda, int scl)
{
    AH3_I2C_Init(0x02, sda, scl);
    
    uint8_t dummy = AH3_CFG_BMP1_EN | AH3_CFG_BMP2_EN;
    AH3_I2C_writeRegister(AH3_CONFIG, &dummy, 1);
    dummy = AH3_CFG_BMP1_EN | AH3_CFG_BMP2_EN | AH3_CFG_BMP1_CALIB;
    AH3_I2C_writeRegister(AH3_CONFIG, &dummy, 1);
    waitTillBusy();
    dummy = AH3_CFG_BMP1_EN | AH3_CFG_BMP2_EN | AH3_CFG_BMP2_CALIB;
    AH3_I2C_writeRegister(AH3_CONFIG, &dummy, 1);
    waitTillBusy();
    dummy = AH3_CFG_BMP1_EN |
            AH3_CFG_BMP2_EN |
            AH3_CFG_BMP1_FILT |
            AH3_CFG_BMP2_FILT |
            AH3_CFG_ASPEED_EN |
            AH3_CFG_ASPEED_CAL;
    AH3_I2C_writeRegister(AH3_CONFIG, &dummy, 1);
    waitTillBusy();
    dummy = AH3_CFG_BMP1_EN |
            AH3_CFG_BMP2_EN |
            AH3_CFG_BMP1_FILT |
            AH3_CFG_BMP2_FILT |
            AH3_CFG_ASPEED_EN;
    AH3_I2C_writeRegister(AH3_CONFIG, &dummy, 1);
}


void AH3_t::waitTillBusy()
{
    uint8_t status = AH3_STATUS_BUSY;
	while ((status & AH3_STATUS_BUSY) != 0) {
		AH3_I2C_readRegister(AH3_STATUS, &status, 1);
	}
}


uint8_t AH3_t::getWhoAmI()
{
    uint8_t dummy;
    AH3_I2C_readRegister(AH3_WHO_AM_I, &dummy, 1);
    return dummy;
}


uint8_t AH3_t::getSoftRevision()
{
    uint8_t dummy;
    AH3_I2C_readRegister(AH3_SOFT_REVISION, &dummy, 1);
    return dummy;
}


//==============================================================================
float AH3_t::getTemp1()
{
    float dummy;
    AH3_I2C_readRegister(AH3_TEMP1_0, (uint8_t*)&dummy, 4);
    return dummy;
}

float AH3_t::getPres1()
{
    float dummy;
    AH3_I2C_readRegister(AH3_PRES1_0, (uint8_t*)&dummy, 4);
    return dummy;
}

float AH3_t::getTemp2()
{
    float dummy;
    AH3_I2C_readRegister(AH3_TEMP2_0, (uint8_t*)&dummy, 4);
    return dummy;
}

float AH3_t::getPres2()
{
    float dummy;
    AH3_I2C_readRegister(AH3_PRES2_0, (uint8_t*)&dummy, 4);
    return dummy;
}

float AH3_t::getAspeed()
{
    float dummy;
    AH3_I2C_readRegister(AH3_ASPEED_0, (uint8_t*)&dummy, 4);
    return dummy;
}

float AH3_t::getAlt()
{
    float dummy;
    AH3_I2C_readRegister(AH3_ALT_0, (uint8_t*)&dummy, 4);
    return dummy;
}

float AH3_t::getVspeed()
{
    float dummy;
    AH3_I2C_readRegister(AH3_VSPEED_0, (uint8_t*)&dummy, 4);
    return dummy;
}

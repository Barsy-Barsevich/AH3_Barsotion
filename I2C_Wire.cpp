#include "AH3_Interface.h"
#include "Wire.h"

uint8_t global_AH3_addr;


uint8_t AH3_I2C_Init(uint8_t addr, int sda, int scl)
{
    Wire.begin(sda, scl);
    global_AH3_addr = addr;
    return 0;
}


uint8_t AH3_I2C_writeRegister(uint8_t reg, uint8_t *buf, uint8_t size)
{
    Wire.beginTransmission(global_AH3_addr);
    Wire.write(reg);
    for (uint8_t i=0; i<size; i++) Wire.write(buf[i]);
    return Wire.endTransmission(true);
}


uint8_t AH3_I2C_readRegister(uint8_t reg, uint8_t *buf, uint8_t size)
{
    Wire.beginTransmission(global_AH3_addr);
    Wire.write(reg);
    Wire.endTransmission(false);
    Wire.requestFrom(global_AH3_addr, size);
    for (uint8_t i=0; i<size; i++) buf[i] = Wire.read();
    return Wire.endTransmission(true);
}

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uint8_t AH3_I2C_Init(uint8_t addr);
uint8_t AH3_I2C_Init_I2CPins(uint8_t addr, int sda, int scl);
uint8_t AH3_I2C_writeRegister(uint8_t reg, uint8_t *buf, uint8_t size);
uint8_t AH3_I2C_readRegister(uint8_t reg, uint8_t *buf, uint8_t size);

#ifdef __cplusplus
}
#endif
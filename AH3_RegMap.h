#pragma once

#define AH3_I2C_ADDRESS				0x02
#define AH3_WHO_AM_I_VALUE			0x74
#define AH3_SOFT_REVISION_VALUE		0x01
/* Register map */
#define AH3_WHO_AM_I				0x00
#define AH3_SOFT_REVISION			0x01
#define AH3_ERR						0x02
#define AH3_CONFIG					0x03
#define AH3_STATUS					0x04
#define AH3_TEMP1_0					0x05
#define AH3_TEMP1_1					0x06
#define AH3_TEMP1_2					0x07
#define AH3_TEMP1_3					0x08
#define AH3_PRES1_0					0x09
#define AH3_PRES1_1					0x0A
#define AH3_PRES1_2					0x0B
#define AH3_PRES1_3					0x0C
#define AH3_TEMP2_0					0x0D
#define AH3_TEMP2_1					0x0E
#define AH3_TEMP2_2					0x0F
#define AH3_TEMP2_3					0x10
#define AH3_PRES2_0					0x11
#define AH3_PRES2_1					0x12
#define AH3_PRES2_2					0x13
#define AH3_PRES2_3					0x14
#define AH3_ASPEED_0				0x15
#define AH3_ASPEED_1				0x16
#define AH3_ASPEED_2				0x17
#define AH3_ASPEED_3				0x18
#define AH3_ALT_0					0x19
#define AH3_ALT_1					0x1A
#define AH3_ALT_2					0x1B
#define AH3_ALT_3					0x1C
#define AH3_VSPEED_0				0x1D
#define AH3_VSPEED_1				0x1E
#define AH3_VSPEED_2				0x1F
#define AH3_VSPEED_3				0x20
/* Register bits */
#define AH3_ERR_BMP1_INIT			(1<<0)
#define AH3_ERR_BMP2_INIT			(1<<1)
#define AH3_ERR_I2C					(1<<2)
#define AH3_ERR_BMP1_DATA			(1<<3)
#define AH3_ERR_BMP2_DATA			(1<<4)
//
#define AH3_CFG_BMP1_EN				(1<<0)
#define AH3_CFG_BMP2_EN				(1<<1)
#define AH3_CFG_BMP1_FILT			(1<<2)
#define AH3_CFG_BMP2_FILT			(1<<3)
#define AH3_CFG_BMP1_CALIB			(1<<4)
#define AH3_CFG_BMP2_CALIB			(1<<5)
#define AH3_CFG_ASPEED_EN			(1<<6)
#define AH3_CFG_ASPEED_CAL			(1<<7)
//
#define AH3_STATUS_BMP1_DRDY		(1<<0)
#define AH3_STATUS_BMP2_DRDY		(1<<1)
#define AH3_STATUS_ASPEED_DRDY		(1<<6)
#define AH3_STATUS_BUSY				(1<<7)

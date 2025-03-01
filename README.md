# Arduino library for AH3 Pitot module
- AH3 documentation: [https://github.com/Barsy-Barsevich/AH3-software/blob/main/docs/AH3_soft_revision_1_manual.pdf]
- AH3 on-board software repository: [https://github.com/Barsy-Barsevich/AH3-software]
- AH3 hardware repository: [https://github.com/Barsy-Barsevich/AH3-hardware]

## Methods
### `AH3_t(int sda, int scl)` (constructor)
Initializes the module.
### `uint8_t getWhoAmI()`
The module's ID should be 0x74.
### `uint8_t getSoftRevision()`
AH3 is a board that contains two barometers and processing microcontroller. Module's register map and communication algorithm may depend on software revision. Today, the 1st March 2025, the 1st software revision is actual.
### `float getTemp0()`
Returns static temperature.
### `float getPres0()`
Returns static pressure.
### `float getTemp1()`
Returns dynamic temperature.
### `float getPres1()`
Returns dynamic pressure.
### `float getVspeed()`
Returns vertical speed.
### `float getAlt()`
Returns altitude from sea level.
### `float getAspeed()`
Returns air speed.
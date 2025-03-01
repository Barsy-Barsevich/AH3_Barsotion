#include "AH3_Barsotion.h"



void setup() {
  AH3_t ah3(17, 18);

  Serial.begin(115200);

  while(1)
  {
    Serial.println(ah3.getTemp1());
    delay(1000);
  }
}

void loop() {}

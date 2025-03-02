#include "AH3_Barsotion.h"

//includes Wire begin
AH3_t ah3(17, 18);

void setup() {
  //delay between Wire begin and init is necessary for proper working
  delay(1000);
  ah3.init();
  
  Serial.begin(115200);

  while(1)
  {
    Serial.println(ah3.getTemp1());
    delay(1000);
  }
}

void loop() {}

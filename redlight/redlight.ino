// Dimmest red light in a Playground, as a photography red light

#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(1);
}


void loop() {
  
   for (int i=0; i <= 9; i++){
      CircuitPlayground.setPixelColor(i, 255,0,0);
   }
}

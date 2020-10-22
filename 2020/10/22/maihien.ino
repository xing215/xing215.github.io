#include <AccelStepper.h>
AccelStepper stepper(8, 3, 5, 4, 6);
#include "stepper.h"
boolean turn1 = false;
void setup() {
  delay(3000);
  stepperSetup();
  Serial.begin(9600);
}
void loop() {
  if (stepper.distanceToGo() == 0) {
    if (turn1 == true) {
      stepper.move(9999);
    }
    else {
      stepper.move(-9999);
    }
    stepper.setSpeed(1000);
    turn1 = !turn1;
  }
  stepperRun();
}

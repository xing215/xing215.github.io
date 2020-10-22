void stepperSetup(){
  delay(3000);
  stepper.setMaxSpeed(3000.0);
  stepper.move(1);
  stepper.setSpeed(1500);
}
void stepperRun(){
  stepper.runSpeedToPosition();
}
bool stepperisStop(){
  if (stepper.distanceToGo() == 0){
    return true;
  }
  else{
    return false;
  }
}

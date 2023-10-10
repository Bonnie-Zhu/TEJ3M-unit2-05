// Created on : Oct 2023
// Created by :Bonnie Zhu
// Turn the servo on from front 90 degree t back 90 degree
//

#include <Servo.h>
  
Servo servoNumber1;

void setup() {
  // setup servo pins
  servoNumber1.attach(2);
  servoNumber1.write(0);
}

void loop() {
  // put our main code here, to run repeatedly
  servoNumber1.write(0);
  delay(1000);
  servoNumber1.write(180);
  delay(1000);
}

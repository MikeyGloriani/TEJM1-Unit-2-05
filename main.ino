/*
 * Created by: Mikey Gloriani
 * Created on: Oct 2023
 * This program makes the servo motor turn 180 degrees
*/

#include <Servo.h>

Servo servoNumber1;
  
void setup(){
  //sets up the servo pins
  servoNumber1.attach(5);
  servoNumber1.write(0);
}

void loop()
{
  // servo motor turns 180 continuously
  servoNumber1.write(0);
  delay(1000);
  servoNumber1.write(180);
  delay(1000);
}

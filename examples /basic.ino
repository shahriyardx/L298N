#include <L298N.h>

/*
First open the jumper of the L298N board from ENA and ENB

Connect Arduino pin 5 to driver ENA
Connect Arduino pin 6 to driver in1
Connect Arduino pin 7 to driver in2

Upload the code and give the Driver and Arduino proper powersupply
*/


L298N driver;

void setup() {
  driver.motor_one.attach(5, 6, 7); // attaching the motor to the pins
  // driver.motor_one.attach(8, 9, 10); // if you want to use another motor
}

void loop() {
  // Clockwise
  driver.motor_one.forward(); // no speed provided, defaults to 255
  delay(2000);

  // counterclockwise 
  driver.motor_one.backward(); // no speed provided, defaults to 255
  delay(2000);

  // Clockwise with speed
  driver.motor_one.forward(100); // speed can be 0 to 255
  // driver.motor_one.backward(100); // speed can be 0 to 255
  delay(2000);

  // Setting speed manually
  driver.motor_one.set_speed(255);
  delay(2000);

  // brake
  driver.motor_one.brake();
  delay(2000);
}

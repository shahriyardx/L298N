# L298N Driver
This is a library to control motors using the L298N Dual motor driver. 
This driver can be used to control 2 DC motor's speed and direction.

This library can be used to control 2 motors direction and speed individually.

# Examples
```c++
#include <L298N.h>

L298N driver;

void setup () {
    // attach motor
    driver.motor_one.attach(5, 6, 7); // ENA, in1, in2
    driver.motor_two.attach(8, 9, 10); // ENB, in3, in4

    // Rotate clockwise
    driver.motor_one.forward();
    driver.motor_two.forward();

    // Rotate counter-clockwise
    driver.motor_one.backward();
    driver.motor_two.backward();

    // Setting speed
    driver.motor_one.set_speed(100); // 0 to 255
    driver.motor_two.set_speed(100); // 0 to 255

    // Brake
    driver.motor_one.brake();
    driver.motor_two.brake();
}

```
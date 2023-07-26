#include <Arduino.h>
#include "L298N.h"

void Motor::attach(int p_en, int p_in1, int p_in2)
{
  this->en = p_en;
  this->in1 = p_in1;
  this->in2 = p_in2;

  pinMode(p_en, OUTPUT);
  pinMode(p_in1, OUTPUT);
  pinMode(p_in2, OUTPUT);
};

void Motor::forward(int speed = 255)
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(en, speed);
  this->speed = speed;
};

void Motor::backward(int speed = 255)
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(en, speed);
  this->speed = speed;
};

void Motor::brake()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(en, 0);
  this->speed = 0;
};

void Motor::set_speed(int speed)
{
  analogWrite(en, speed);
};

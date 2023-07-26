#ifndef L298N_h
#define L298N_h

class Motor {
  public:
    int en, in1, in2;
    int speed = 255;
    void attach(int p_en, int p_in1, int p_in2);
    void forward(int speed = 255);
    void backward(int speed = 255);
    void brake();
    void set_speed(int speed);
  private:
};

class L298N {
  public:
    Motor motor_one;
    Motor motor_two;
  private:
};

#endif
#ifndef pins_h
#define pins_h

// Motor controllers
const int M1_ENABLE = 13;
const int M1_CURRENT = 12;
const int M2_ENABLE = 17;
const int M2_CURRENT = 18;
const int M3_ENABLE = 5;
const int M3_CURRENT = 6;

// Motor speeds
const int M1_SPEED = 10;
const int M2_SPEED = 9;
const int M3_SPEED = 7;

// IMU
const int IMU_SDA = 47;
const int IMU_SCL = 21;

// Select balancing mode(0 = x-side , 1 = y-side edge, 2 = corner)
int MODE = 0;

// Variables for 6 DIL-Switch at Servo Inputs
const int DILSW1 = 1;
const int DILSW2 = 2;
const int DILSW3 = 42;
const int DILSW4 = 41;
const int DILSW5 = 40;
const int DILSW6 = 39;

#endif

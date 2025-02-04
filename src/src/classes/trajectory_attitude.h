#ifndef trajectory_attitude_h
#define trajectory_attitude_h

#include "Arduino.h"

#include "../definitions/parameters.h"

// Attitude trajectory class
class AttitudeTrajectory
{
public:
    // Constructor
    AttitudeTrajectory();
    // Initializer
    void init();
    // Generate step
    void generate();
    //
    void set_reference(int mode);
    //
    float qr0, qr1, qr2, qr3;
    //
    float qu0, qu1, qu2, qu3;
    float qu0_qu0 = qu0 * qu0;
    float qu0_qu1 = qu0 * qu1;
    float qu0_qu2 = qu0 * qu2;
    float qu0_qu3 = qu0 * qu3;
    float qu1_qu1 = qu1 * qu1;
    float qu1_qu2 = qu1 * qu2;
    float qu1_qu3 = qu1 * qu3;
    float qu2_qu2 = qu2 * qu2;
    float qu2_qu3 = qu2 * qu3;
    float qu3_qu3 = qu3 * qu3;
    //
    float omega_r_x, omega_r_y, omega_r_z;
    //
    float alpha_r_x, alpha_r_y, alpha_r_z;

private:
    // Microsecond timer
    unsigned long timer;
    //
    float pos, vel, acc, jer, sna, cra;
    //
    bool flag_rot1, flag_res1, flag_rot2, flag_res2;
};

#endif

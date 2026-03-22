#pragma once

#define MACHINE_NAME "CNC Plotter using 28BYJ-48 Stepper Motor"


#define N_AXIS 3

#ifdef DEFAULT_HOMING_CYCLE_0
    #undef DEFAULT_HOMING_CYCLE_0
#endif

#ifdef DEFAULT_HOMING_CYCLE_1
    #undef DEFAULT_HOMING_CYCLE_1
#endif

#define X_UNIPOLAR
#define X_PIN_PHASE_0   3    // IN1
#define X_PIN_PHASE_1   4    // IN2
#define X_PIN_PHASE_2  10    // IN3
#define X_PIN_PHASE_3   9    // IN4

#define Y_UNIPOLAR
#define Y_PIN_PHASE_0   7    // IN1
#define Y_PIN_PHASE_1   8    // IN2
#define Y_PIN_PHASE_2   6    // IN3
#define Y_PIN_PHASE_3   5    // IN4

#define Z_SERVO_PIN     2    // Not a good pin to use, may need to unplug the servo before power on

#define SPINDLE_TYPE    SpindleType::NONE

#ifdef USE_RMT_STEPS
#undef USE_RMT_STEPS  // Suppress unused variable warning
#endif

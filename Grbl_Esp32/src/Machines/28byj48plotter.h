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
#define X_PIN_PHASE_0   5    // IN1
#define X_PIN_PHASE_1   7    // IN3
#define X_PIN_PHASE_2   6    // IN2
#define X_PIN_PHASE_3   8    // IN4

#define Y_UNIPOLAR
#define Y_PIN_PHASE_0   9    // IN1
#define Y_PIN_PHASE_1  20    // IN3
#define Y_PIN_PHASE_2  10    // IN2
#define Y_PIN_PHASE_3  21    // IN4

#define Z_SERVO_PIN     4

#define SPINDLE_TYPE    SpindleType::NONE

#ifdef USE_RMT_STEPS
#undef USE_RMT_STEPS  // Suppress unused variable warning
#endif

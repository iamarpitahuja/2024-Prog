using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor leftA;
extern motor leftB;
extern motor leftC;
extern motor rightA;
extern motor rightB;
extern motor rightC;
extern controller Controller1;
extern inertial autonCarrier;
extern digital_out wingLeft;
extern digital_out wingRight;
extern motor intake;
extern motor kicker;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );
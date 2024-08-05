#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor leftA = motor(PORT11, ratio6_1, true);
motor leftB = motor(PORT12, ratio6_1, true);
motor leftC = motor(PORT13, ratio6_1, true);
motor rightA = motor(PORT1, ratio6_1, false);
motor rightB = motor(PORT2, ratio6_1, false);
motor rightC = motor(PORT3, ratio6_1, false);
controller Controller1 = controller(primary);
inertial autonCarrier = inertial(PORT15);
digital_out wingLeft = digital_out(Brain.ThreeWirePort.H);
digital_out wingRight = digital_out(Brain.ThreeWirePort.F);
motor intake = motor(PORT4, ratio6_1, false);
motor kicker = motor(PORT14, ratio36_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}
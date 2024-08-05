#include "vex.h"

void default_constants(){
  // Each constant set is in the form of (maxVoltage, kP, kI, kD, startI).
  chassis.set_drive_constants(10, 1.7, 0, 7, 0);
  chassis.set_heading_constants(6, .4, 0, 1, 0);
  chassis.set_turn_constants(9, 0.5, 0, 3.2, 0);
  chassis.set_swing_constants(12, .3, .001, 2, 15);

  // Each exit condition set is in the form (settle_error, settle_time, timeout).
  chassis.set_drive_exit_conditions(2.05, 300, 1800);
  chassis.set_turn_exit_conditions(2.0, 300, 3500);
  chassis.set_swing_exit_conditions(1, 300, 3000);
}

void odom_constants(){
  default_constants();
  chassis.drive_max_voltage = 8;
  chassis.drive_settle_error = 3;
}

void drive_test(){
  chassis.drive_max_voltage = 6;
  chassis.turn_max_voltage = 6;
  chassis.swing_max_voltage = 6;
  chassis.drive_distance(50);
  
}

void turn_test(){
  chassis.drive_max_voltage = 6;
  chassis.turn_max_voltage = 6;
  chassis.swing_max_voltage = 6;
  chassis.turn_to_angle(180);
  
}

void near_side_disruptor(){
  chassis.drive_max_voltage = 6;
  chassis.turn_max_voltage = 6;
  chassis.swing_max_voltage = 6;
  chassis.left_swing_to_angle(90);
  chassis.right_swing_to_angle(0);
}

void full_test(){
  chassis.drive_max_voltage = 6;
  chassis.turn_max_voltage = 6;
  chassis.swing_max_voltage = 6;
  chassis.drive_distance(24);
  chassis.turn_to_angle(-45);
  chassis.drive_distance(-36);
  chassis.right_swing_to_angle(-90);
  chassis.drive_distance(24);
  chassis.turn_to_angle(0);
}

void rightSide_awp(){
  chassis.drive_max_voltage = 10;
  chassis.turn_max_voltage = 8;
  chassis.swing_max_voltage = 8;
  intake.spinFor(0.5, seconds);
  chassis.drive_distance(10);
  chassis.turn_to_angle(40);
  chassis.drive_distance(23);
  wait(10, msec);
  chassis.drive_distance(-2);
  wingLeft.set(true);
  this_thread::sleep_for(10);
  chassis.drive_distance(-17.5);
  chassis.turn_to_angle(-30);
  wingLeft.set(false);
  this_thread::sleep_for(10);
  chassis.drive_distance(2);
  chassis.turn_to_angle(-60);
  wait(10, msec);
  chassis.turn_to_angle(180,10);
  chassis.drive_distance(30);
}

void skills_auton(){
  chassis.drive_max_voltage = 8.5;
  chassis.turn_max_voltage = 8;
  chassis.swing_max_voltage = 6;
  chassis.drive_distance(37);
  wait(20,msec);
  chassis.drive_distance(-21);
  wait(20,msec);
  chassis.turn_to_angle(-100);
  wait(20,msec);
  chassis.drive_distance(-5);
  wingLeft.set(true);
  wait(20,msec);
  kicker.spinFor(reverse, 28, seconds);
  wait(20,msec);
  wingLeft.set(false);
  chassis.drive_distance(5);
  wait(20,msec);
  chassis.turn_to_angle(33);
  wait(20,msec);
  chassis.drive_distance(-21.5);
  wait(20, msec);
  chassis.turn_to_angle(62);
  wait(20,msec);
  chassis.drive_distance(-80);
  wait(1, seconds);
  chassis.turn_to_angle(-10);
  wait(20,msec);
  chassis.drive_distance(20);
  wait(20,msec);
  chassis.turn_to_angle(26);
  task::sleep(10);
  chassis.drive_distance(17);
  wait(20,msec);
  chassis.turn_to_angle(30);
  chassis.set_drive_constants(12, 1.7, 0, 6, 0);
  chassis.drive_distance(15);
  wait(20,msec);
  chassis.turn_to_angle(40);
  wait(20,msec);
  chassis.drive_distance(10);
  wait(20,msec);
  chassis.turn_to_angle(80);
  wait(20, msec);
  wingLeft.set(true);
  wait(20, msec);
  wingRight.set(true);
  chassis.drive_distance(-60);

  
}
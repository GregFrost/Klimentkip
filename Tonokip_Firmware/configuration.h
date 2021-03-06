#ifndef PARAMETERS_H
#define PARAMETERS_H

// NO RS485/EXTRUDER CONTROLLER SUPPORT
// PLEASE VERIFY PIN ASSIGNMENTS FOR YOUR CONFIGURATION!!!!!!!
#define MOTHERBOARD 3 // ATMEGA168 0, SANGUINO 1, MOTHERBOARD = 2, MEGA 3, ATMEGA328 4

//Comment out to disable SD support
//#define SDSUPPORT 1

//Acceleration settings
float full_velocity_units = 10.0; // the units between minimum and G1 move feedrate
float min_units_per_second = 35.0; // the minimum feedrate

// AD595 THERMOCOUPLE SUPPORT UNTESTED... USE WITH CAUTION!!!!

// Select one of these only to define how the nozzle temp is read.
//#define HEATER_USES_THERMISTOR
//#define HEATER_USES_AD595
#define HEATER_USES_MAX6675

// Select one of these only to define how the bed temp is read.
#define BED_USES_THERMISTOR
//#define BED_USES_AD595

// Calibration formulas
// e_extruded_steps_per_mm = e_feedstock_steps_per_mm * (desired_extrusion_diameter^2 / feedstock_diameter^2)
// new_axis_steps_per_mm = previous_axis_steps_per_mm * (test_distance_instructed/test_distance_traveled)
// units are in millimeters or whatever length unit you prefer: inches,football-fields,parsecs etc

//Calibration variables
float x_steps_per_unit = 5.0*16;
float y_steps_per_unit = 5.0*16;
float z_steps_per_unit = 160*16;
float e_steps_per_unit = 43*16;
float max_feedrate = 18000;

//float x_steps_per_unit = 10.047;
//float y_steps_per_unit = 10.047;
//float z_steps_per_unit = 833.398;
//float e_steps_per_unit = 0.706;
//float max_feedrate = 3000;

//For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
const bool X_ENABLE_ON = 0;
const bool Y_ENABLE_ON = 0;
const bool Z_ENABLE_ON = 0;
const bool E_ENABLE_ON = 0;

//Disables axis when it's not being used.
const bool DISABLE_X = false;
const bool DISABLE_Y = false;
const bool DISABLE_Z = true;
const bool DISABLE_E = false;

const bool INVERT_X_DIR = true;
const bool INVERT_Y_DIR = false;
const bool INVERT_Z_DIR = true;
const bool INVERT_E_DIR = true;

//Thermistor settings:

//Uncomment for 100k thermistor
//#include "ThermistorTable_100k.h"
//#include "BedThermistorTable_100k.h"

//Uncomment for 200k thermistor
//#include "ThermistorTable_200k.h"
//#include "BedThermistorTable_200k.h"

//Identical thermistors on heater and bed:
#include "ThermistorTable_200k.h"
//#include "ThermistorTable_100k.h"
#define BNUMTEMPS NUMTEMPS
#define bedtemptable temptable

//Endstop Settings
#define ENDSTOPPULLUPS 1
const bool ENDSTOPS_INVERTING = false;
const bool min_software_endstops = false; //If true, axis won't move to coordinates less than zero.
const bool max_software_endstops = true;  //If true, axis won't move to coordinates greater than the defined lengths below.
const int X_MAX_LENGTH = 220;
const int Y_MAX_LENGTH = 220;
const int Z_MAX_LENGTH = 100;

#define BAUDRATE 115200



#endif

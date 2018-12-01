/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/


#include "OI.h"

#include <WPILib.h>

OI::OI() : //step 16:
leftStick(new Joystick(1)),
rightStick(new Joystick(0))
{
	// Process operator interface input here.
}

//step 17: making the get methods
Joystick* OI::getLeftStick(){
	return leftStick;
}

Joystick* OI::getRightStick(){
	return rightStick;
}
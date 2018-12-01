/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/DriveTrain.h"
#include "../RobotMap.h"

//step 21:
#include "Commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"), //step 4: member initialization list
left(new TalonSRX(LEFT_MOTOR)), //remember to set these port numbers in the RobotMap.h
right(new TalonSRX(RIGHT_MOTOR)),
power(0) {
		right->SetInverted(true);
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	//step 22:
	SetDefaultCommand(new TankDrive());
}

//step 5
void DriveTrain::tankDrive(double leftVal, double rightVal){
	//step 6
	left->Set(ControlMode::PercentOutput, leftVal);
	right->Set(ControlMode::PercentOutput, rightVal);

}


// Put methods for controlling this subsystem
// here. Call these from Commands.
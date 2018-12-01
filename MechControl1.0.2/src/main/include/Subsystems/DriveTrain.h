/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
//have to include this in order for talons to be known
#include "ctre/Phoenix.h"
#include "WPILib.h"


class DriveTrain : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	//step 1
	TalonSRX* left;
	TalonSRX* right;
	double power;

public:
	DriveTrain();
	~DriveTrain(); //this is an optional deconstructor
	void InitDefaultCommand() override;

	//You have to make a TankDrive method before you make the command
	//Because the tank drive needs values in order to run, you add that as a requirement in the parameters
	//coding convention is the first letter is lowercase unless it is a class(still use camel case)
	//step 3
	void tankDrive(double leftVal, double rightVal);
};

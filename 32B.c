#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    speedDial,      sensorPotentiometer)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           mFlyRF,        tmotorVex393TurboSpeed_HBridge, openLoop, encoderPort, I2C_1)
#pragma config(Motor,  port2,           mDriveLF,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           mIntakeFront,  tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port4,           mDriveRF,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           mFlyLB,        tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port6,           mFlyRB,        tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           mFlyLF,        tmotorVex393TurboSpeed_MC29, openLoop, reversed, encoderPort, I2C_2)
#pragma config(Motor,  port8,           mDriveLB,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           mDriveRB,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          mIntakeVert,   tmotorVex393TurboSpeed_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

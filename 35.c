#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    speedDial,      sensorNone)
#pragma config(Sensor, in2,    powerExpBattery, sensorAnalog)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           mFlyLO,        tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           mFlyRF,        tmotorVex393_MC29, openLoop, encoderPort, I2C_1)
#pragma config(Motor,  port4,           intakeVert,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           leftDrive,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           mFlyRO,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           rightDrive,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           mFlyRB,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           mFlyLB,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          mFlyLF,        tmotorVex393_HBridge, openLoop, encoderPort, I2C_2)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

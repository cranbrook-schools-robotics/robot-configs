#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    vPowerExpander, sensorAnalog)
#pragma config(Sensor, in2,    speedDial,      sensorPotentiometer)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           mIntakeB,      tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           mFly1,         tmotorVex393HighSpeed_MC29, openLoop, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port3,           mFly2,         tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           mIntakeRoller, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           mIntakeF,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           mDriveR,       tmotorVex393TurboSpeed_MC29, openLoop, reversed, encoderPort, I2C_3)
#pragma config(Motor,  port7,           mDriveL,       tmotorVex393TurboSpeed_MC29, openLoop, encoderPort, I2C_2)
#pragma config(Motor,  port8,           mFly3,         tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           mFly4,         tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          mIntakeM,      tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main(){}

#pragma config(Sensor, dgtl1,  button1,        sensorTouch)
#pragma config(Sensor, dgtl2,  button2,        sensorTouch)
#pragma config(Sensor, dgtl3,  button3,        sensorTouch)
#pragma config(Sensor, dgtl4,  button4,        sensorTouch)
#pragma config(Sensor, dgtl5,  button5,        sensorTouch)
#pragma config(Sensor, dgtl6,  button6,        sensorTouch)
#pragma config(Sensor, dgtl7,  button7,        sensorTouch)
#pragma config(Sensor, dgtl12, arm,            sensorDigitalOut)
#pragma config(Motor,  port2,           motor1,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           motor2,        tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task conveyor()
{
	startMotor(motor2, 40);
	wait(10);
	stopMotor(motor2);
}

task button_1()
{
	while(true){
	if (SensorValue[button1] == 1){

		startMotor(motor1, -30);
		wait1Msec(1000);
		startMotor(motor1, 0);
		stopTask(button_1);

	/*	SensorValue[arm] = 1;
		wait(4);
		startMotor(motor1, 60);
		wait(1);
		stopMotor(motor1);
		startTask(conveyor);*/

	}
}}
task button_2(){
	if (SensorValue[button2] == 1){


		setServo(motor1, -105);
		SensorValue[arm] = 1;
		wait(4);
		setServo(motor1, 0);
		startTask(conveyor);

	}
}
task button_3(){
	if (SensorValue[button3] == 1){


		setServo(motor1, -75);
		SensorValue[arm] = 1;
		wait(4);
		setServo(motor1, 0);
		startTask(conveyor);
}}
task button_4(){
	if (SensorValue[button4] == 1){

		setServo(motor1, 0);
		SensorValue[arm] = 1;
		wait(4);
		setServo(motor1, 0);
		startTask(conveyor);

	}
}
task button_5(){
	if (SensorValue[button5] == 1)
	{
		setServo(motor1, 75);
		SensorValue[arm] = 1;
		wait(4);
		setServo(motor1, 0);
		startTask(conveyor);
	}
}
task button_6(){
	if (SensorValue[button6] == 1){

		setServo(motor1, 105);
		SensorValue[arm] = 1;
		wait(4);
		setServo(motor1, 0);
		startTask(conveyor);
	}
}

task button_7(){
	if (SensorValue[button7] == 1){
		{
			setServo(motor1, 125);
			SensorValue[arm] = 1;
			wait(4);
			setServo(motor1, 0);
			startTask(conveyor);
}}}

task main()
{
	while(true)
	{
		startTask(button_1);
		startTask(button_2);
		startTask(button_3);
		startTask(button_4);
		startTask(button_5);
		startTask(button_6);
		startTask(button_7);
}}

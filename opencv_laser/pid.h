#pragma once
typedef struct _pid {
	float target;
	float Actual;
	float err; 
	float err_last;
	float Kp, Ki, Kd;
	float step;
	float integral;
}pid;
class Pid_control

{
public:

	void PID_init(float kp, float ki, float kd, char name);

	float PID_realize(float end_x, float real_x);
private:
	char name;
	int index;
	int count = 0;
	pid pid;
	double kp;

};
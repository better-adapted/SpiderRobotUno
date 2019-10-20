// Locate the initial position of legs
// RegisHsu 2015-09-09

#include <Servo.h>
#include "sketch.h"

Servo servo[4][3];


void setup()
{
	//initialize all servos
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			servo[i][j].attach(servo_pin[i][j]);
			delay(20);
		}
	}
}

void loop(void)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			servo[i][j].write(90);
			delay(20);
		}
	}
}


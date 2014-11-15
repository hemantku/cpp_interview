/*
 * hour_clock.cpp
 *
 *  Created on: Nov 5, 2014
 *      Author: vineghlinux
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

int min(int x, int y) { return (x < y)? x: y; }

int calcAngle(double h, double m)
{
		if(h < 0 || m < 0 || h > 12 || m > 60)
			cout << "Wrong Input!" << endl;

		//if(h == 12) h=0;
		//if(m == 60) m=0;

		//int hour_angle = 0.5 * (h * 0.6) + m;
		//int minute_angle = 6 * m;

		int angle = 0.5 * abs((60*h) - (11*m));
		return angle;
}

/*int main()
{
    cout << calcAngle(9, 60) << endl;
    cout << calcAngle(3, 30);
    return 0;
}*/


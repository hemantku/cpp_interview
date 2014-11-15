/*
 * max_sum.cpp
 *
 *  Created on: Nov 11, 2014
 *      Author: vineghlinux
 */
#include <iostream>
using namespace std;

int maxsum_array(int array[])
{
	int max_so_far = 0, max_ending_now = 0;
	int i;
	for(i=0;i < 8; i++){
		max_ending_now = max_ending_now + array[i];
		if(max_ending_now < 0)
			max_ending_now = 0;
		if(max_so_far < max_ending_now)
			max_so_far = max_ending_now;
	}
	return max_so_far;

}

int main()
{
	int array[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int max_sum = maxsum_array(array);
	cout << max_sum << endl;
}



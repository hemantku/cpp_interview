/*
 * majority.cpp
 *
 *  Created on: Nov 5, 2014
 *      Author: vineghlinux
 */
#include <iostream>
using namespace std;

void majority(int array[])
{
	int current_candidate = array[0], counter = 0, i;
	for(i = 0; i < 13; i++)
	{
		if(current_candidate == array[i]){
			counter++;
		} else if(counter == 0){
			current_candidate = array[i];
			counter++;
		} else {
			counter--;
		}
	}
	cout << current_candidate << endl;
}

/*int main(){
	int array[] = {5,5,5,3,3,1,1,3,3,3,1,3,3};
	majority(array);
	return 0;
}*/




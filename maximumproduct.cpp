/*
 * maximumproduct.cpp
 *
 *  Created on: Nov 4, 2014
 *      Author: vineghlinux
 */
#include <iostream>
using namespace std;


void maximum_product(int array[])
{
	int min=0, nextmin=0, max=0, nextmax=0;
	for(int i=0; i<5; i++)
	{
		cout << " array number" << array[i] << endl;
		if(array[i] < min)
		{
			min=array[i];
			nextmin = min;
		}
		else if(array[i] < nextmin)
		{
			nextmin = array[i];
		}
		else if(array[i] > max){
			max = array[i];
			nextmax = max;
		}
		else if(array[i] > nextmax){
			nextmax = array[i];
		}

	}
	cout << "nextmax:" << nextmax;
    cout << "max:" << max;
	if((min*nextmin) > (max*nextmax))
	{
		cout << "The maximum product" << min*nextmin << endl;
	}
	else
	{
		cout << "The maximum product" << max*nextmax << endl;
	}
}
/*int main(){
	cout << "Program to find maximum product!" << endl;
    int array[] = {-5, 1, 7, -3, 4};
    maximum_product(array);
}*/



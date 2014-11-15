/*
 * large_2.cpp
 *
 *  Created on: Nov 5, 2014
 *      Author: vineghlinux
 */

#include <iostream>
using namespace std;

void second_max(int array[])
{
	int largest1 = array[0];
	int largest2 = array[1];
	int temp;
	if(largest1 < largest2){
		temp = largest1;
		largest2 = largest1;
		largest2 = temp;
	}
    for(int i = 2; i < 4; i++){
    	 if (array[i] >= largest1){
    	        largest2 = largest1;
    	        largest1 = array[i];
    	 }else if (array[i] > largest2){
    	      largest2 = array[i];
    	 }
    }
    cout << "Largest elements" << largest1 << " " << largest2;

}
/*int main(){
	cout << "Program to find maximum product!" << endl;
    int array[] = {-5, 1, 7, -3, 4};
    second_max(array);
}*/



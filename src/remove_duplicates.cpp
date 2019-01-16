/*
 * remove_duplicates.cpp
 *
 *  Created on: Nov 10, 2014
 *      Author: vineghlinux
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

void remove_dup(int arr[])
{
	 int i;
	 cout << "Hello!" << endl;
	 cout << arr[0] << endl;
     for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    	 if(arr[abs(arr[i])] >= 0)
    		 arr[abs(arr[i])] = -arr[abs(arr[i])];
    	 else
    		cout << abs(arr[i]);
     }

}
/*int main(){
	int arr[] = {2, 3, 8, 2, 5, 7, 8, 9};
	remove_dup(arr);
    return 0;
}*/

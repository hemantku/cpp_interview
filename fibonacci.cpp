/*
 * fibonacci.cpp
 *
 *  Created on: Nov 5, 2014
 *      Author: vineghlinux
 */

#include <iostream>
using namespace std;

void fibonacci(int n)
{
	int prev = 0;
    int curr = 1;
    while(curr <= n){
    	cout << curr << " ";
    	int temp = curr;
    	curr = curr + prev;
    	prev = temp;
    }
    cout << prev << " ";
}

/*int main()
{
	int number = 12;
	fibonacci(number);
	return 0;

}*/

/*
 * reverse_digit.cpp
 *
 *  Created on: Nov 5, 2014
 *      Author: vineghlinux
 */
#include <iostream>
using namespace std;

void reverse(int number)
{
	int newnum = 0;
	cout << "Number is:" << number << endl;
	while(number!=0)
	{
		int n = number%10;
		number = number/10;
		newnum = (newnum * 10) + n;
	}
	cout << newnum << endl;


}
/*int main()
{
	int number = 1234;
	reverse(number);
	return 0;

}*/

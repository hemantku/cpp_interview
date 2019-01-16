/*
 * reverse_string.cpp
 *
 *  Created on: Nov 6, 2014
 *      Author: vineghlinux
 */
#include <iostream>
#include <string.h>
using namespace std;

string reversechar(string string)
{
	int i;
	int  len = string.length();
	cout << len <<endl;
	for (i = 0; i < (len/2); i ++){
		string[i] = string[i] ^ string [len-i];
		string[len - i] = string [len - i] ^ string[i];
		string[i] = string[i] ^ string[len - i];
	}
	cout << string << endl;
	return string;
}
/*int main(){
		cout << "I am here" << endl;
		string str = "Vineet";
		string str1 = reversechar(str);
		cout << str1 << endl;
		return 0;
}*/




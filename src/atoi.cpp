/*
 * atoi.cpp
 *
 *  Created on: Nov 6, 2014
 *      Author: vineghlinux
 */
#include <iostream>
using namespace std;

bool isNumericischar(char ch){
	return (ch >= '0') && (ch <= '9') ? true: false;
}

int mychar(char *string)
{
	if(!*string)
		return 0;

	int res = 0;
	int sign = 1;
	int i = 0;

	if(string[0] == '-'){
		sign = -1;
		i++;
	}
	if(string[0] == '+'){
			sign = 1;
			i++;
	}
	for(; string[i]!= '\0'; i++){
			//cout << string[i] << endl;
			if(isNumericischar(string[i]) == false)
				return 0;
			res = res * 10 + string[i] -'0';
    }
	return sign*res;
}


/*int main(){
	char str[] = "+123677";
	int val = mychar(str);
	cout << val << endl;
	return 0;
}*/

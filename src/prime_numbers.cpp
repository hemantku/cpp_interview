/*
 * prime_numbers.cpp
 *
 *  Created on: Nov 11, 2014
 *      Author: vineghlinux
 */
#include <iostream>
#include <cstring>
using namespace std;


void markmultiples(bool arr[], int a, int n)
{

	int i = 2;
	while((a*i) <= n ){
		arr[(a*i) - 1] = 1;
		i++;
	}
}
void print_primes(int n)
{
	if(n >= 2){
		bool arr[n];
		memset(arr, 0, sizeof(arr));
		for(int i = 1; i < n ; i++)
		{
			//cout << arr[i] << endl;
			if(arr[i] == 0 )
			{
					cout << i+1 << endl;
					markmultiples(arr,i+1,n);
			}

		}
	}
}
/*int main(){
	int n = 30;
	print_primes(n);
}*/





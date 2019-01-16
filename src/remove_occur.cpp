/*
 * remove_occur.cpp
 *
 *  Created on: Nov 9, 2014
 *      Author: vineghlinux
 */
#include <iostream>
#include <cstring>
using namespace std;

char* removestring_char(char* str, char c)
{
	int hole = -1;
			int i = 0;
	if(str != NULL){

		while(str[i] != '\0'){
			if(str[i] == c){
					if(hole == -1){

						hole = i;
					}

			}
			else{
					if(hole == -1){

						str[hole++] = str[i];
					}


			}
			i++;
		}

	}
	str[hole] = '\0';
			return str;
}




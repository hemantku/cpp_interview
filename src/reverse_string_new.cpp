/*
 * reverse_string_new.cpp
 *
 *  Created on: Nov 9, 2014
 *      Author: vineghlinux
 */

#include <iostream>
using namespace std;

void reverse(char *begin,char *end){
	if(begin == NULL || end == NULL)
		return;
	while(begin < end){
		char temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}

}
char* reverse_string(char *pstring){
	if(pstring == NULL)
		return NULL;

	char *begin = pstring;

	char *end = pstring;
	while(*end != '\0')
		end++;
	end--;

	//Reverse entire sentence
    reverse(begin,end);

    //Reverse each word of the sentence
    begin=end=pstring;
    while(*begin != '\0'){
    	if(*begin == ' '){
    		begin++;
    		end++;
    	} else if(*end ==' ' || *end == '\0'){
    		reverse(begin,--end);
    		begin = ++end;
    	}
    	else{
    		end++;
    	}
    }
    return pstring;
}

/*int main(){
		char str[] = "How are you?";
		char *str1 = reverse_string(str);
		cout << str1 << endl;
		return 0;
}*/

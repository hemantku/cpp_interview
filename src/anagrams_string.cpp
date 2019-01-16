/*
 * anagrams_string.cpp
 *
 *  Created on: Nov 11, 2014
 *      Author: vineghlinux
 */
#include <iostream>
#include <string>
using namespace std;
#define MAX_CHARS 256

bool isanagram(string str1, string str2)
{
	int count[MAX_CHARS] = {0};
	int i;
	if(str1.length() > str2.length() || str1.length() < str2.length() )
		return false;


	for(i=0;i < str1.length();i++){
		//cout << str1[i] << endl;
		//cout << str2[i] << endl;
		count[str1[i]]++;
		count[str2[i]]--;
		//cout << count[str1[i]] << endl;
		//cout << count[str2[i]] << endl;
	}

	for(int i=0; i < MAX_CHARS; i++){
		if (count[i])
		            return false;
	}
	return true;
}


/*int main()
{
	 string str1 = "geeks";
	 string str2 = "forss";
	 if(isanagram(str1,str2)){
		 cout << "Anagram" << endl;
	 }
	 else
	 {
		 cout << "Not Anagram" << endl;

	 }
}*/

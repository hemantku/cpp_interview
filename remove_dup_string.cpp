/*
 * remove_dup_string.cpp
 *
 *  Created on: Nov 10, 2014
 *      Author: vineghlinux
 */
#include <iostream>
#include <map>
using namespace std;



string remove_duplicates(string s){
	map<char, int> ht;
	int stringlength = s.length();

	for(int i = 0; i < stringlength; i++){
		if(ht.find(s[i]) == ht.end()){
			ht[s[i]] = 1;
	}
	}
	map<char, int>::iterator it;
	string temp = "";
	for(it = ht.begin(); it != ht.end(); it++){
		temp += it->first;
	}

	return temp;



}

/*int main(){
	string str = "aaabaaabbbcccd";
	cout << remove_duplicates(str) << endl;
	return 0;
}*/






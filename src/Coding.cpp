//============================================================================
// Name        : Coding.cpp
// Author      : Vineet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void permute(string& in, string& out)
{
	if(in.empty()){
		cout << out << endl;
   	}
	for(int i=0; i < in.size(); i++){
		string innew = in;
		string outnew = out;
		//cout << "New in:" << innew << endl;
		//cout << "New out:" << outnew << endl;
		innew.erase(i,1);
		outnew += in.at(i);
		permute(innew,outnew);

	}
}

/*int main() {
	cout << "Program to compute permutations of a string" << endl;
    string in = "123";
    string out;
    permute(in,out);
	return 0;
}*/

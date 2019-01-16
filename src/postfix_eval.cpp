/*
 * postfix_eval.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: vineghlinux
 */
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <cstring>
using namespace std;


int evaluate_tokens(string tokens){
	int retval = 0;
	stack<int> st;
	string operators = "+-/*";
	if(tokens.size() == 0)
		return 0;
	for(size_t i=0;i< tokens.size(); i++){
		string token;
		//strcpy(tokens[i],token);
		int o = operators.find(token);
		if(o != -1){
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			if(o == 0){st.push(b+a);}
			if(o == 1){st.push(b-a);}
			if(o == 2){st.push(b*a);}
			if(o == 3){st.push(b/a);}
		} else {
			st.push(atoi(token.c_str()));
		}
	}
	return st.top();
}

/*int main(){
	string tokens = "3+4";
	cout << tokens.length() << endl;
	evaluate_tokens(tokens);

}*/







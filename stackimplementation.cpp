//Muhammad Furqony Sabililhaq
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <map>
#include <stack>

using namespace std;

bool check(string s){
	stack<char> st;
	map<char, char> m;
	m.insert(pair<char, char>(']', '['));
	m.insert(pair<char, char>('}', '{'));
	m.insert(pair<char, char>(')', '('));
	
	
	for(int i = 0; i < s.size(); ++i){
		char ptr = s.at(i);
		if (ptr == '[' || ptr == '(' || ptr == '{'){
			st.push(ptr);
		}else{
			if(st.empty()){
				return false;
			}
			
			if(st.top() == m[ptr]){
				st.pop();
				
			}else{
				return false;
			}
		}
		
	}
	
	if(st.empty()){
		return true;
	}
	return false;
}

int main(){
	string in;
	cin >> in;
	
	if(check(in)){
		cout << "True" << endl;
	}else{
		cout << "False" << endl;
	}
	return 0;
}
//Muhammad Furqony Sabililhaq
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <map>
#include <stack>

// #include <bits/stdc++.h>
#define ll long long
#define ld long double
#define For(i, n) for(int i = 0; i < n; ++i)
#define ForN(i, n) for(int i = 1; i <= n; ++i)
const int MOD = 1e9+7;
const ll INF = 1e18;

using namespace std;

bool isBalanced(string s){
	map<char, char> m;
	stack<char> st;
	m['['] = ']';
	m['('] = ')';
	m['{'] = '}';
	
	for(int i = 0; i < s.size(); ++i){
		char ptr = s.at(i);
		
		if(m.find(ptr) != m.end()){
			st.push(ptr);
		}else{
			if(st.empty()){
				return false;
			}
			
			if(ptr == m[st.top()]){
				st.pop();
			}else{
				return false;
			}
		}
	}
	
	if(st.empty()){
		return true;		
	}else{
		return false;
	}
	
}

int main(){
	string tmp;
	cin >> tmp;
	if(isBalanced(tmp)){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}
	
	return 0;
}
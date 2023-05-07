//Muhammad Furqony Sabililhaq
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <string>

// #include <bits/stdc++.h>
#define ll long long
#define ld long double
#define For(i, n) for(int i = 0; i < n; ++i)
#define ForN(i, n) for(int i = 1; i <= n; ++i)
const int MOD = 1e9+7;
const ll INF = 1e18;

using namespace std;

vector<bool> ans;
vector<char> kara;

void solve(string a, string b){
	For(i, kara.size()){
		if((a.find(kara[i]) != std::string::npos) && (b.find(kara[i]) != std::string::npos)){
			ans.push_back(true);
			return;
		}
	}
	
	ans.push_back(false);
}

int main(){
	int n;
	cin >> n;
	for(int i = 97; i <= 122; ++i){
		kara.push_back(i);
	}
	
	For(i, n){
		string tmpa, tmpb;
		cin >> tmpa >> tmpb;
		solve(tmpa, tmpb);
	}
	
	For(i, n){
		if(ans[i] == 1){
			cout << "YES" << endl;
		}else cout << "NO" << endl;
	}
	
	return 0;
}
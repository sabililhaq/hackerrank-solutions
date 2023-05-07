//Muhammad Furqony Sabililhaq
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>

// #include <bits/stdc++.h>
#define ll long long
#define For(i, n) for(int i = 0; i < n; ++i)
const int MOD = 1e9+7;
const ll INF = 1e18;

using namespace std;

vector<int> ans;

void solve(string kata){
	int n = kata.size();
	int sum = 0;
	for(int i = 1; i <= n-1; ++i){

		for(int j = 1; j <= n-i+1 ;++j){
			string tmp = "";
			for(int k = j; k <= i; ++k){
				
			}
		}
		
	}
}

int main(){
	int n;
	cin >> n;
	For(i, n){
		string tmp;
		cin >> tmp;
		solve(kata);
	}
	
	For(i, n){
		cout << ans[i] << endl;
	}
	
	return 0;
}
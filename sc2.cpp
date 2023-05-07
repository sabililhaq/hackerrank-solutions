//Muhammad Furqony Sabililhaq
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>

// #include <bits/stdc++.h>
#define ll long long
#define ld long double
#define For(i, n) for(int i = 0; i < n; ++i)
#define ForN(i, n) for(int i = 1; i <= n; ++i)
const int MOD = 1e9+7;
const ll INF = 1e18;

using namespace std;

vector<int> ans;

void solve(){
	int n;
	cin >> n;
	int sum = 0;
	vector<int> vec(n);
	For(i, n){
		cin >> vec[i];
	}
	
	For(i, n-1){
		
		for(int j = i+1; j < n; ++j){
			if(vec[i] > vec[j]){
				int tmp = vec[i];
				vec[i] = vec[j];
				vec[j] = tmp;
				++sum;
				i = 0;
			}
		}
		
	}
	ans.push_back(sum);
	return;
}

// void solve(){
// 	
	// int n;
	// cin >> n;
	// int sum = 0;
	// vector<int> vec(n);
	// For(i, n){
		// cin >> vec[i];
	// }
// 	
	// For(i, n-1){
		// ll min = vec[i];
		// int ind = -1;
		// for(int j = i; j < n; ++j){
// 			
		// }
	// }
// }


int main(){
	int n;
	cin >> n;
	For(i, n){
		solve();
	}
	
	For(i, n){
		cout << ans[i] << endl;
	}
	return 0;
}
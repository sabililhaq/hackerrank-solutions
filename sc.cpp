//Muhammad Furqony Sabililhaq
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <map>

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
		int min = vec[i];
		int indmin = -1;
		for(int j = i+1; j < n; ++j){
			if(vec[j] < min){
				min = vec[j];
				indmin = j;
			}
		}
		
		if(indmin == -1){
			continue;
		}
		
		int tmp = vec[i];
		vec[i] = vec[indmin];
		vec[indmin] = tmp;
		++sum;
	}
	
	ans.push_back(sum);
}

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
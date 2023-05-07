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
void solve(n, vector<int> vec){
	vector<int> initial(n);
	For(i, n){
		initial[i] = i+1;
	}
	int bribe = 0;
	
	For(i, n){
		if(){
			
		}
	}
	
}

int main(){
	int n;
	cin >> n;
	
	For(i, n){
		int d;
		cin >> d;
		vector<int> tmp;
		For(j, d){
			cin >> tmp[j];
		}
		solve(d, tmp);
		tmp.clear();
	}
	
	For(i, ans.size()){
		if(ans[i] == -1){
			cout << "Too chaotic" <<endl;
		}else cout << ans[i] << endl;
	}
	return 0;
}
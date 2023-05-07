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

int main(){
	int n, e;
	cin >> n >> e;
	vector<int> avec(e), bvec(e);
	
	for(int i = 0; i < 2*e; ++i){
		if(i % 2 == 0){
			cin >> avec[i/2];
		}else{
			cin >> bvec[i/2];
		}
	}
	
	vector<int> ans;
	
	while(avec.size() > 0){
		if(!count(ans.begin(), ans.end(), avec[0])){
			ans.push_back(avec[0]);
		}
		
		if(!count(ans.begin(), ans.end(), bvec[0])){
			ans.push_back(bvec[0]);
		}
		
		avec.erase(avec.begin());
		bvec.erase(bvec.begin());
	}
	
	for(int i = 0; i < ans.size(); ++i){
		cout << ans[i] << " ";
	}
	cout << endl;
	
	return 0;
}
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
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);
	For(i, n){
		cin >> vec[i];
	}	
	sort(vec.begin(), vec.end());
	int sum = 0;
	
	For(i, n){
		if(k >= vec[i]){
			k -= vec[i];
			++sum;
		}else{
			break;
		}
	}
	
	cout << sum << endl;
	return 0;
}
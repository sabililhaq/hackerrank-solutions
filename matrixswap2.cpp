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
	int n;
	cin >> n;
	
	cout << "* ";
	for(int i = 0; i < n; ++i){
		cout << i+1 << " ";
	}
	cout << endl;
	
	for(int i = 1; i <= n; ++i){
		cout << i << " ";
		for(int j = 1; j <= n; ++j){
			cout << i*j << " ";
		}
		cout << endl;
	}
	return 0;
}
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

int diagonalDifferences(vector< vector<int> > vec){
	int n = vec.size();
	int a = 0, b = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			
			if(i == j){
				a += vec[i][j];
			}
			
			if(i + j == n-1){
				
				b += vec[i][j];
			}
			
			
		}
	}
	
	return abs(a-b);
}

int main(){
	int n;
	cin >> n;
	vector< vector<int> > vec(n);
	
	for(int i = 0; i < n; ++i){
		vector<int> tmp(n);
		for(int j = 0; j < n; ++j){
			cin >> tmp[j];
		}
		vec[i] = tmp;
	}
	
	cout << diagonalDifferences(vec) << endl;
	
	return 0;
}
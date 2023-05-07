//Muhammad Furqony Sabililhaq
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <list>

// #include <bits/stdc++.h>
#define ll long long
#define ld long double
#define For(i, n) for(int i = 0; i < n; ++i)
#define ForN(i, n) for(int i = 1; i <= n; ++i)
const int MOD = 1e9+7;
const ll INF = 1e18;

using namespace std;

int main(){
	int n, d;
	cin >> n >> d;
	
	list<int> l;
	For(i, n){
		int tmp;
		 cin>> tmp;
		 l.push_back(tmp);
	}
	
	For(i, d){
		int tmp = l.front();
		l.pop_front();
		l.push_back(tmp);
	}
	
	For(i, n){
		cout << l.front() << " ";
		l.pop_front();
	}
	cout << endl;
	return 0;
}
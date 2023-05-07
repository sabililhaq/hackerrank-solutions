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

int main(){
	long n, r;
	cin >> n >> r;
	map<long, long> m;
	vector<long> unique;
	int sum = 0;
	
	for(int i = 0; i < n; ++i){
		long tmp;
		cin >> tmp;
		if(m[tmp] == 0)
			m[tmp] = 1;
			unique.push_back(tmp);
		}else{
			m[tmp] += 1;
		}
	}
	
	if(n<3){
		cout << 0 << endl;
		exit(0);
	}
	
	for(int i = 1; i < unique.size()-1; ++i){
		sum += m[unique[i]/r] * m[unique[i]] * m[unique[i]*r];
	}
	cout << sum << endl;
	
	
}

// int main(){
	// int n, r;
	// cin >> n >> r;
	// vector<long> vec(n);
// 	
	// for(int i = 0; i < n; ++i){
		// cin >> vec[i];
	// }
// 	
	// if(n < 3){
		// cout << 0 << endl;
		// exit(0);
	// }
// 	
	// long triplets = 0;
// 	
	// for(int i = 0; i < n-2; ++i){
		// for(int j = i+1; j < n-1; ++j){
			// if(vec[j] == vec[i]*r){
// 				
				// for(int k = j+1; k < n; ++k){
					// if(vec[k] == vec[j]*r){
						// ++triplets;
					// }
				// }
			// }
		// }
	// }
// 	
	// cout << triplets << endl;
// 	
// 	
	// return 0;
// }
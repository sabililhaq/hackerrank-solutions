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

int minSwaps(vector<int> arr){
	  int i,c=0,n=arr.size();
    for(i=0;i<n;i++)
    {
        if(arr[i]==(i+1))
            continue;
        
        swap(arr[i],arr[arr[i]-1]);
        c++;
        i--;
    }
    return c;
}

int main(){
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i){
		cin >> vec[i];
	}
	
	cout << minSwaps(vec) << endl;
	return 0;
}
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

int main() {
    long int N,K;

    cin>>N>>K;
    long *a= new long[N+1]();

    for(int i=0;i<K;i++)
    {
    	int p, q, sum;
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<=N) a[q+1]-=sum;
    }
    int max = 0, x = 0; 

    for(int i=1;i<=N;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }
    
    cout<<max << endl;
    return 0;
}

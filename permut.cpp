//Muhammad Furqony Sabililhaq
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <string>

// #include <bits/stdc++.h>
#define ll long long
#define ld long double
#define For(i, n) for(int i = 0; i < n; ++i)
#define ForN(i, n) for(int i = 1; i <= n; ++i)
const int MOD = 1e9+7;
const ll INF = 1e18;

using namespace std;

void permute(string s , string answer)
{
    if(s.length() == 0)
    {
        cout << answer << endl;
        return;
    }
    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0,i);
        string right_substr = s.substr(i+1);
        string rest = left_substr + right_substr;
        permute(rest , answer+ch);
    }

}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		
	}
    string s;
    string answer="";

    cin>>s;

    permute(s , answer);
    return 0;
}
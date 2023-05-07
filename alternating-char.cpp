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

string swap(string word){
	string tmp = "";
	
	for(int i = word.size()-1; i >= 0; --i){
		tmp += word.at(i);
	}
	
	return tmp;
}

bool areAnagram(string str1, string str2)
{
    // Get lengths of both strings
    int n1 = str1.length();
    int n2 = str2.length();
 
    // If length of both strings is not same, then they
    // cannot be anagram
    if (n1 != n2)
        return false;
 
    // Sort both the strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
 
    return true;
}

void solve(string word){
	int n = word.size();
	int anags = 0;
	
	for(int i = 1; i < n; ++i){ //jumlah huruf
		for(int j = 0; j < n-i; ++j){ //indeks tmp
			string ptr = "";
			for(int k = 0; k < i; ++k){
				ptr += word.at(k+j);
			}
			
			for(int k = n-1; k > j+i-1; --k){
				string tmp = "";
				int rec = i;
				int index = k;
				while(rec > 0){
					tmp += word.at(index);
					--index;
					--rec;
				}
				
				// cout << ptr << "&&" << tmp << endl;
				
				// if(ptr == tmp || ptr == swap(tmp)){
					// ++anags;
				// }
				
				if(areAnagram(ptr, tmp)){
					++anags;
				}
				
			}
			
		}
	}
	cout << anags << endl;
}

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; ++i){
		string tmp;
		 cin >> tmp;
		 solve(tmp);
	}
	
	return 0;
}
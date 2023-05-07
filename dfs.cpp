//Muhammad Furqony Sabililhaq
#include <iostream>
#include <vector>

// #include <bits/stdc++.h>

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
	int indice = 0;
	while(avec.size()>0){
		if(!count(ans.begin(), ans.end(), avec[indice])){
			ans.push_back(avec[indice]);
		}
		
		if(!count(ans.begin(), ans.end(), bvec[indice])){
			ans.push_back(bvec[indice]);
		}
		
		int ptr = bvec[indice];
		indice++;
		while(indice < avec.size()){
			if(ptr == avec[indice]){
				ptr = bvec[indice];
				if(!count(ans.begin(), ans.end(), bvec[indice])){
					ans.push_back(bvec[indice]);
				}
				avec.erase(avec.begin() + indice);
				bvec.erase(bvec.begin() + indice);
			}else{
				++indice;
			}
		}
		indice = 0;
		avec.erase(avec.begin());
		bvec.erase(bvec.begin());
		
	}
	
	for(int i = 0; i < ans.size(); ++i){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
//Muhammad Furqony Sabililhaq
#include <iostream>
#include <stdlib.h>
#include <map>
#include <vector>

using namespace std;

// int main(){
	// int n;
	// cin >> n;
	// map<string, int> m; //nama, urutan
// 	
	// for(int i = 0; i < n; ++i){
		// string tmp;
		// cin >> tmp;
		// m[tmp] = i+1;
	// }
// 	
	// string req;
	// cin >> req;
// 	
	// if(m[req] == 0){
		// cout << -1 << endl;
	// }else cout << m[req] << endl;
	// return 0;
// }

int main(){
	int n;
	cin >> n;
	vector< pair<int, string> > vec(n);
	
	for(int i = 0; i < n; ++i){
		string anjay;
		cin >> anjay;
		vec[i] = make_pair(i+1, anjay);
	}
	
	string req;
	cin >> req;
	
	for(int i = 0; i < n; ++i){
		if(vec[i].second == req){
			cout << i+1 << endl;
			exit(0);
		}
	}
	
	cout << -1 << endl;
}
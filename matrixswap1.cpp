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

vector<int> swapHorizontal(vector<int> vec){
	vector<int> tmp;
	for(int i = vec.size()-1; i >= 0; --i){
		tmp.push_back(vec[i]);
	}
	return tmp;
}

vector< vector<int> > swapVertical(int indice, vector< vector<int> > vec){
	int n = vec.size();
	for(int i = 0; i < n/2; ++i){
		// int tmp = vec[i][indice];
		// vec[i][indice] = vec[i][n-i-1];
		// vec[i][n-i-1] = tmp;
		int tmp = vec[indice][i];
		vec[indice][i] = vec[n-i-1][i];
		vec[n-i-1][i] = tmp;
	}
	
	return vec;
}

// int cari(int a,int currentMax, vector< vector<int> > matrix){
	// for(int j = 0; j < matrix.size()-1; ++j){
		// int mat = matrix[a][j] + matrix[a+1][j] + matrix[a][j+1] + matrix[a+1][j+1];
		// printf("%d^^%d    %d %d\n%d^^%d\n\n", matrix[a][j],matrix[a][j+1] , a, mat, matrix[a+1][j], matrix[a+1][j+1]);
		// currentMax = mat > currentMax? mat : currentMax;
	// }
	// return currentMax;
// }
// 
// 
// int flippingMatrix(vector< vector<int> > matrix){
	// int max = -1;
	// int n = matrix.size();
	// for(int i = 0; i < n-1; ++i){
// 		
		// max = cari(i, max, matrix);
// 		
		// matrix[i+1] = swap(matrix[i+1]);
// 		
// 		
		// max = cari(i, max, matrix);
// 		
		// matrix[i] = swap(matrix[i]);
// 		
// 		
		// max = cari(i, max, matrix);
// 		
		// matrix[i+1] = swap(matrix[i+1]);
// 		
// 		
		// max = cari(i, max, matrix);
	// }
// 	
	// return max;
// }

int flippingMatrix(vector< vector<int> > matrix){
	int n = matrix.size();
	for(int i = 0; i < n; ++i){
		if(matrix[i][0] + matrix[i][1] < matrix[i][n-2] + matrix[i][n-1]){
			matrix[i] = swapHorizontal(matrix[i]);
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << matrix[i][j] << "%";
		}
		cout << endl;
	}
	cout << endl;
	// for(int j = 0; j < n; ++j){
		// for(int i = 0; i < n; ++i){
			// if(matrix[i][0] + matrix[i][1] < matrix[i][n-2] + matrix[i][n-2]){
				// matrix = swapVertical(j, matrix);
			// }
		// }
	// }
	
	// for(int j = 0; j < n; ++j){
		// for(int i = 0; i < n; ++i){
			// printf("%d %d\n%d %d\n\n", matrix[j][0], matrix[j][1], matrix[j][n-2], matrix[j][n-1]);
		// }
		// cout << endl;
	// }
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << matrix[j][0] << "^";
		}
		cout << endl;
	}
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << matrix[i][j] << "%";
		}
		cout << endl;
	}
	
	return matrix[0][0] + matrix[0][1] + matrix[1][0] + matrix[1][1];
}

int main(){
	int q;
	cin >> q;
	
	for(int i = 0; i < q; ++i){
		int n;
		cin >> n;
		
		vector< vector<int> > vec(2*n);
		
		for(int j = 0; j < 2*n; ++j){
			vector<int> tmp(2*n);
			for(int k = 0; k < 2*n; ++k){
				cin >> tmp[k];
			}
			vec[j] = tmp;
			tmp.clear();
		}
		
		cout << flippingMatrix(vec) << endl;
	}
	
	
	return 0;
}
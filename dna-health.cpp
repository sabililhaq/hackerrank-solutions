#include <bits/stdc++.h>

using namespace std;

class Strand{
	public:
		int start;
		int end;
		string d;
	
};

int countFreq(string besar, string kecil){
	int count = 0;
	for(int i = 0; i < besar.size(); ++i){
		if(besar.at(i) == kecil.at(0) && besar.size()-i+1 > kecil.size()){
			bool dah = true;
			for(int j = 0; j < kecil.size(); ++j){
				if(kecil.at(j) != besar.at(i+j)){
					dah = false;
				}
			}
			if(dah) ++count;
		}	
	}
	return count;
}

int main(){
  int n;
  cin >> n;
  vector<string> genes(n);
  vector<int> health(n);
  
  for(int i = 0; i < n; ++i){
	cin >> genes[i];
  }
  
  for(int i = 0; i < n; ++i){
  	cin >> health[i];
  }
  
  int s;
  cin >> s;
  
  vector<Strand> vec(s);
  for(int i = 0; i < s; ++i){
  	cin >> vec[i].start >> vec[i].end >> vec[i].d;
  }
  
  vector<int> ans(s, 0);
  for(int i = 0; i < s; ++i){
  	for(int j = vec[i].start; j <= vec[i].end; ++j){
  		
  		string pat = vec[i].d;
  		string txt = genes[j];
  		int freq = countFreq(pat, txt);
  		ans[i] += freq * health[j];
  		
  	}
  }
  cout << *min_element(ans.begin(), ans.end()) << " " << *max_element(ans.begin(), ans.end()) << endl;
}
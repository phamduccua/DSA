#include <bits/stdc++.h>
using namespace std;
	void Try(vector<int> &v1,int n,vector<vector<int>> &v){
		v.push_back(v1);
		for(int i = 0;i<n-1;i++){
			v1[i] = v1[i] + v1[i+1];
		}
		v1.erase(v1.begin()+n-1);
		if(n != 1) Try(v1,n-1,v);
	}
	int main(){
		int t; cin >> t;
		while(t--){
			vector<vector<int>> v;
			int n; cin >> n;
			vector<int> v1;
			for(int i = 0;i<n;i++){
				int x; cin >> x;
				v1.push_back(x);
			}
			Try(v1,n,v);
			for(int i = v.size()-1;i>=0;i--){
				cout << '[';
				for(int j = 0;j<v[i].size();j++){
					cout << v[i][j];
					if(j != v[i].size()-1){
						cout << ' ';
					}
				}
				cout << ']' << endl;
			}
		}
	}

#include <bits/stdc++.h>
using namespace std;	
int a[1000];
int n,k;
vector<int> tmp;
vector<string> v;
int used[1000];
	int kt(vector<int> v){
		for(int i = 1;i<v.size();i++){
			if(v[i] <= v[i-1]) return 0;
		}
		return 1;
	}
	void Try(int i,int pos){
		for(int j = pos;j < n;j++){
			tmp.push_back(a[j]);
			if(i == k){
				string s;
				for(auto it : tmp){
					s+= to_string(it);
				}
				if(kt(tmp)) v.push_back(s);
			}
			else Try(i+1,j+1);
			tmp.pop_back();
		}
	}
	bool cmp(pair<vector<int>,string> a,pair<vector<int>,string> b){
		return a.second < b.second;
	}
	int main(){
		cin >> n;
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		for(int i = 2;i<=n;i++){
			k = i;
			Try(1,0);
		}
		sort(v.begin(),v.end());
		for(auto it : v){
			for(auto it1 : it){
				cout << it1 << ' ';
			}
			cout << endl;
		}
	}

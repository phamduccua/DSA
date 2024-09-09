#include <bits/stdc++.h>
using namespace std;
int nt[50];
int cnt = 0;
vector<vector<int>> v;
vector<int> tmp;
int n,p,s;
	int kt(int n){
		for(int i = 2;i<=sqrt(n);i++){
			if(n % i == 0) return 0;
		}
		return n>1;
	}
	void add(){
		for(int i = 2;i<=100000;i++){
			if(cnt > 46) return;
			if(kt(i)) nt[cnt++] = i;
		}
	}
	void Try(int sum,int pos,int k){
		for(int i = pos+1;i<cnt;i++){
			sum += nt[i];
			tmp.push_back(nt[i]);
			if(sum == s && k == n){
				v.push_back(tmp);
			}
			else if(sum < s && k < n){
				Try(sum,i,k+1);
			}
			sum-= nt[i];
			tmp.pop_back();
		}
	}
	int main(){
		add();
		int t; cin >> t;
		while(t--){
			v.clear();
			cin >> n >> p >> s;
			int i = 0;
			while(nt[i] < p){
				++i;
			}
			Try(0,i,1);
			cout << v.size() << endl;
			for(int i = 0;i<v.size();i++){
				for(auto it : v[i]){
					cout << it << ' ';
				}
				cout << endl;
			}
		}
	}

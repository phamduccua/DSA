#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<int> a;
int n;
int b[1001];
	bool nt(int n){
		for(int i = 2;i<=sqrt(n);i++){
			if(n % i == 0) return false;
		}
		return n > 1;
	}
	void Try(int sum,int pos){
		for(int i = pos;i<n;i++){
			sum += b[i];
			a.push_back(b[i]);
			if(nt(sum)) v.push_back(a);
			Try(sum,i+1);
			sum -= b[i];
			a.pop_back();
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			v.clear();
			cin >> n;
			for(int i = 0;i<n;i++) cin >> b[i];
			sort(b,b+n,greater<int>());
			Try(0,0);
			sort(v.begin(),v.end());
			for(auto it : v){
				for(auto it1 : it){
					cout << it1 << ' ';
				}
				cout << endl;
			}
			cout << endl;
		}
	}

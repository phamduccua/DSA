#include <bits/stdc++.h>
using namespace std;
int a[1001];
vector<vector<int>> v;
vector<int> tmp;
int n;
	void Try(int sum,int pos){
		for(int i = pos;i<n;i++){
			sum += a[i];
			tmp.push_back(a[i]);
			if(sum % 2) v.push_back(tmp);
			Try(sum,i+1);
			sum -= a[i];
			tmp.pop_back();
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			v.clear();
			cin >> n;
			for(int i = 0;i<n;i++) cin >> a[i];
			sort(a,a+n,greater<int>());
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

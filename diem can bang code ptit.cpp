#include <bits/stdc++.h>
using namespace std;
	int find(long long trai,long long phai,vector<pair<int,int>> a,int n){
		for(int i = 0;i<n;i++){
			phai -= a[i].first;
			if(trai == phai) a[i].second;
			trai += a[i].first;
		}
		return -1;
	}
	bool cmp(pair<int,int> a,pair<int,int> b){
		return a.first < b.first;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			long long trai = 0;
			long long phai = 0;
			vector<pair<int,int>> a;
			for(int i = 0;i<n;i++){
				int x; cin >> x;
				a.push_back({x,i+1});
				phai += x;
			}
			cout << trai << ' '<< phai << endl;
			sort(a.begin(),a.end(),cmp);
			int x = find(trai,phai,a,n);
			cout << x << endl;
		}
	}

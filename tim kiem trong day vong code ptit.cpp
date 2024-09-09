#include <bits/stdc++.h>
using namespace std;
	int tk(vector<pair<int,int>> a,int x){
		int l = 0,r = a.size()-1;
		int m = -1;
		while(l <= r){
			m = (l+r)/2;
			if(a[m].first == x){
				return a[m].second;
			}
			else if(a[m].first < x){
				l = m+1;
			}
			else{
				r = m-1;
			}
		}
		return -1;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,x;
			cin >> n >> x;
			vector<pair<int,int>> v;
			for(int i = 0;i<n;i++){
				int q; cin >> q;
				v.push_back({q,i+1});
			}
			sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b)->bool{
				return a.first < b.first;
			});
			cout << tk(v,x) << endl;
		}
	}

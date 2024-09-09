#include <bits/stdc++.h>
using namespace std;
	bool cmp(pair<int,int> a,pair<int,int> b){
		return a.first < b.first;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			vector<pair<int,int>> v;
			for(int i = 0;i<n;i++){
				int x; cin >> x;
				v.push_back({x,i});
			}
			sort(v.begin(),v.end(),cmp);
			int res = -1e9;
			int nh = v[0].second;
			for(int i = 1;i<n;i++){
				res = max(res,v[i].second-nh);
				nh = min(nh,v[i].second);
			}
			cout << res << endl;
		}
	}

#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			vector<pair<int,int>> v;
			for(int i = 0;i<n;i++){
				int x,y; cin >> x >> y;
				v.push_back({x,y});
			}
			sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b)->bool{
				if(a.second != b.second) return a.second < b.second;
				else return a.first < b.first;
			});
			int kt = v[0].second;
			int cnt = 1;
			for(int i = 1;i<n;i++){
				if(v[i].first >= kt){
					kt = v[i].second;
					++cnt;
				}
			}
			cout << cnt << endl;
		}
	}

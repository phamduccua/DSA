#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n],b[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			for(int i = 0;i<n;i++){
				cin >> b[i];
			}
			vector<pair<int,int>> v;
			for(int i = 0;i<n;i++){
				v.push_back({a[i],b[i]});
			}
			sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b)->bool{
				if(a.second != b.second) return a.second < b.second;
				else return a.first < b.first;
			});
			int kt = v[0].second;
			int cnt = 1;
			for(int i = 1;i<n;i++){
				if(v[i].first > kt){
					cnt++;
					kt = v[i].second;
				}
			}
			cout << cnt << endl;
		}
	}

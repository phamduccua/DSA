#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			map<int,int> mp;
			for(int i = 0;i<n;i++){
				int x; cin >> x;
				mp[x]++;
			}
			vector<pair<int,int>> v(mp.begin(),mp.end());
			sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b)->bool{
				if(a.second != b.second) return a.second > b.second;
				else return a.first < b.first;
			});
			for(auto it : v){
				for(int i = 0;i<it.second;i++){
					cout << it.first << ' ';
				}
			}
			cout << endl;
		}
	}

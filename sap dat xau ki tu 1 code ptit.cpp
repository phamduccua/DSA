#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			string s; cin >> s;
			map<char,int> mp;
			for(int i = 0;i<s.length();i++){
				mp[s[i]]++;
			}
			vector<pair<char,int>> v(mp.begin(),mp.end());
			sort(v.begin(),v.end(),[](pair<char,int> a,pair<char,int> b)->bool{
				return a.second > b.second;
			});
			int sum = 0;
			for(int i = 1;i<v.size();i++){
				sum += v[i].second;
			}
			if(v[0].second > sum +1) cout << -1 << endl;
			else cout << 1 << endl;
		}
	}

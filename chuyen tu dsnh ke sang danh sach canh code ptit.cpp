#include <bits/stdc++.h>
using namespace std;
	int main(){
		int n; cin >> n;
		vector<pair<int,int>> v;
		getchar();
		for(int i = 1;i<=n;i++){
			string s; getline(cin,s);
			stringstream ss(s);
			string token;
			while(ss >> token){
				int x = stoi(token);
				if(x > i){
					v.push_back({i,x});
				}
			}
		}
		sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b)->bool{
			if(a.first != b.first) return a.first < b.first;
			else return a.second < b.second;
		});
		for(auto it : v){
			cout << it.first << ' ' << it.second << endl;
		}
	}

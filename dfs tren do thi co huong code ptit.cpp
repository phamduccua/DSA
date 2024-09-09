#include <bits/stdc++.h>
using namespace std;
int used[1001];
	void dfs(int u,vector<int> ke[]){
		used[u] = 1;
		cout << u << ' ';
		for(auto v : ke[u]){
			if(!used[v]){
				dfs(v,ke);
			}
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m,u;
			cin >> n >> m >> u;
			vector<int> ke[1001];
			for(int i = 0;i<m;i++){
				int x,y; cin >> x >> y;
				ke[x].push_back(y);
			}
			dfs(u,ke);
			cout << endl;
		}
	}

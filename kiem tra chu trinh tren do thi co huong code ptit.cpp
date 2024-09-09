#include <bits/stdc++.h>
using namespace std;
int color[1001];
	bool dfs(int u,vector<int> ke[]){
		color[u] = 1;
		for(int v : ke[u]){
			if(color[v] == 0){
				if(dfs(v,ke)) return true;
			}
			else if(color[v] == 1){
				return true;
			}
		}
		color[u] = 2;
		return false;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m;
			cin >> n >> m;
			vector<int> ke[1001];
			for(int i = 0;i<m;i++){
				int x,y; cin >> x >> y;
				ke[x].push_back(y);
				ke[y].push_back(x);
			}
			memset(color,0,sizeof(color));
			bool ok = false;
			for(int i = 1;i<=n;i++){
				if(color[i] == 0 && dfs(i,ke)){
					ok = true;
					break;
				}
			}
			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

#include <bits/stdc++.h>
using namespace std;
int color[1001];
bool ok;
	bool dfs(int u,int par,vector<int> ke[]){
		color[u] = 3 - color[par];
		for(int v : ke[u]){
			if(color[v] == 0){
				if(!dfs(v,u,ke)) return false;
			}
			else if(color[v] == color[u]) return false;
		}
		return true;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m; cin >> n >> m;
			vector<int> ke[1001];
			for(int i = 0;i<m;i++){
				int x,y; cin >> x >> y;
				ke[x].push_back(y);
				ke[y].push_back(x);
			}
			memset(color,0,sizeof(color));
			color[0] = 2;
			ok = true;
			for(int i = 1;i<=n;i++){
				if(color[i] == 0){
					if(!dfs(i,0,ke)){
						ok = false;
					}
				}
			}
			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

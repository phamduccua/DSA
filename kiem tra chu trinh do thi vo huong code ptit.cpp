#include <bits/stdc++.h>
using namespace std;
int used[1001];
	bool dfs(int u,int par,vector<int> ke[]){
		used[u] = 1;
		for(int v : ke[u]){
			if(!used[v]){
				if(dfs(v,u,ke)) return true;
			}
			else if(v != par) return true;
		}
		return false;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m; cin >> n >> m;
			vector<int> ke[1001];
			memset(used,0,sizeof(used));
			for(int i = 0;i<m;i++){
				int x,y; cin >> x >> y;
				ke[x].push_back(y);
				ke[y].push_back(x);
			}
			bool ok = false;
			for(int i = 1;i<=n;i++){
				if(!used[i] && dfs(i,-1,ke)){
					ok = true; break;
				}
			}
			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

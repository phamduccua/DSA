#include <bits/stdc++.h>
using namespace std;
int used[1001];
	void dfs(int u ,vector<int> ke[]){
		used[u] = 1;
		for(int v : ke[u]){
			if(!used[v]){
				dfs(v,ke);
			}
		}
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
			int cnt = 0;
			memset(used,0,sizeof(used));
			for(int i = 1;i<=n;i++){
				if(!used[i]){
					++cnt;
					dfs(i,ke);
				}
			}
			cout << cnt << endl;
		}
	}

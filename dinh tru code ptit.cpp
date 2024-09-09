#include <bits/stdc++.h>
using namespace std;
int disc[1001],low[1001],timer;
bool is_cut[1001];
	void dfs(int u,int par,vector<int> ke[]){
		low[u] = disc[u] = ++timer;
		int child = 0;
		for(int v : ke[u]){
			if(v == par) continue;
			if(!disc[v]){
				++child;
				dfs(v,u,ke);
				low[u] = min(low[u],low[v]);
				if(par != -1 && low[v] >= disc[u]){
					is_cut[u] = true;
				}
			}
			else low[u] = min(low[u],disc[v]);
		}
		if(par == -1 && child > 1) is_cut[u] = true;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m; cin >> n >> m;
			vector<int> ke[1001];
			for(int i =0;i<m;i++){
				int x,y; cin >> x >> y;
				ke[x].push_back(y);
				ke[y].push_back(x);
			}
			memset(disc,0,sizeof(disc));
			memset(low,0,sizeof(low));
			memset(is_cut,false,sizeof(is_cut));
			timer = 0;
			for(int i = 1;i<=n;i++){
				if(!disc[i]){
					dfs(i,-1,ke);
				}
			}
			for(int i = 1;i<=n;i++){
				if(is_cut[i]){
					cout << i << ' ';
				}
			}
			cout << endl;
		}
	} 

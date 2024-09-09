#include <bits/stdc++.h>
using namespace std;
int used[1001],ok;
map<int,int> parent;
	void dfs(int u,vector<int> ke[],int t){
		used[u] = 1;
		if(u == t){
			ok = 1;
			return;
		};
		for(int v : ke[u]){
			if(!used[v]){
				parent[v] = u;
				dfs(v,ke,t);
			}
		}
	}
	int main(){
		int	q; cin >> q;
		while(q--){
			int n,m,s,t; cin >> n >> m >> s >> t;
			vector<int> ke[1001];
			for(int i = 0;i<m;i++){
				int x,y; cin >> x >> y;
				ke[x].push_back(y);
			}
			memset(used,0,sizeof(used));
			parent.clear();
			ok = 0;
			dfs(s,ke,t);		
			vector<int> path;
			if(ok){
				while(s != t){
					path.push_back(t);
					t = parent[t];
				}
				path.push_back(s);
				reverse(path.begin(),path.end());
				for(int it : path){
					cout << it << ' ';
				}
			} 
			else cout << -1 << endl;
			cout << endl;
		} 
	}

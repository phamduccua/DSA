#include <bits/stdc++.h>
using namespace std;
int used[1001],parent[1001],ok;
	void bfs(int u,vector<int> ke[],int t){
		queue<int> Q;
		Q.push(u);
		used[u] = 1;
		while(!Q.empty()){
			int v = Q.front(); Q.pop();
			for(auto x : ke[v]){
				if(x == t){
					parent[x] = v;
					ok = 1;
					return;
				}
				else if(!used[x]){
					parent[x] = v;
					Q.push(x);
					used[x] = 1;
				}
			}
		}
	}
	int main(){
		int q; cin >> q;
		while(q--){
			int n,m,s,t; cin >> n >> m >> s >> t;
			vector<int> ke[1001];
			ok = 0;
			for(int i = 0;i<m;i++){
				int x,y; cin >> x >> y;
				ke[x].push_back(y);
			}
			memset(used,0,sizeof(used));
			memset(parent,0,sizeof(parent));
			bfs(s,ke,t);
			if(ok){
				vector<int> path;
				while(s != t){
					path.push_back(t);
					t = parent[t];
				}
				path.push_back(s);
				reverse(path.begin(),path.end());
				for(int x : path){
					cout << x << ' ';
				}
			}
			else cout << -1;
			cout << endl;
		}
	}

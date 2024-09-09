#include <bits/stdc++.h>
using namespace std;
int used[1001];
	void bfs(int u,vector<int> ke[]){
		queue<int> Q;
		Q.push(u);
		used[u] = 1;
		while(!Q.empty()){
			int v = Q.front();
			Q.pop();
			cout << v << ' ';
			for(auto it : ke[v]){
				if(!used[it]){
					used[it] = 1;
					Q.push(it);
				}
			}
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m,u;
			cin >> n >> m >> u;
			memset(used,0,sizeof(used));
			vector<int> ke[1001];
			for(int i = 0;i<m;i++){
				int x,y ;cin >> x >> y;
				ke[x].push_back(y);
				ke[y].push_back(x);
			}
			bfs(u,ke);
			cout << endl;
		}
	}

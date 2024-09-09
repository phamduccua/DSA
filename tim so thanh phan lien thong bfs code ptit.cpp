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
			for(auto x : ke[v]){
				if(!used[x]){
					Q.push(x);
					used[x] = 1;
				}
			}
		}
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
			int cnt = 0;
			for(int i = 1;i<=n;i++){
				if(!used[i]){
					++cnt;
					bfs(i,ke);
				}
			}
			cout << cnt << endl;
		}
	}

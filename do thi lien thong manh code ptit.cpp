#include <bits/stdc++.h>
using namespace std;
stack<int> oder;
bool used[1001];
	void dfs1(int u,vector<int> ke[]){
		used[u] = true;
		for(int v : ke[u]){
			if(!used[v]){
				dfs1(v,ke);
			}
		}
		oder.push(u);
	}
	void dfs2(int u,vector<int> t_ke[]){
		used[u] = true;
		for(int v : t_ke[u]){
			if(!used[v]){
				dfs2(v,t_ke);
			}
		}
	}
	int main(){
		int t;cin >> t;
		while(t--){
			int n,m; cin >> n >> m;
			vector<int> ke[1001];
			vector<int> t_ke[1001];
			for(int i = 0;i<m;i++){
				int x,y; cin >> x >> y;
				ke[x].push_back(y);
				t_ke[y].push_back(x);
			}
			memset(used,false,sizeof(used));
			for(int i = 1;i<=n;i++){
				if(!used[i]){
					dfs1(i,ke);
				}
			}
			memset(used,false,sizeof(used));
			int cnt = 0;
			while(!oder.empty()){
				int top = oder.top();oder.pop();
				if(used[top] == 0){
					dfs2(top,t_ke);
					++cnt;
				}
			}
			if(cnt==1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	

#include <bits/stdc++.h>
using namespace std;
int n;
int dp[1 << 15][15];
int c[16][16];
	int solve(int msk,int u){
		if(dp[msk][u] != -1) return dp[msk][u];
		if(msk == (1 << n) -1) return 0;
		int ans = 1e9;
		for(int v = 0;v < n;v++){
			if((msk & (1 << v)) == 0){
				int n_msk = msk | (1 << v);
				ans = min(ans,solve(n_msk,v)+c[u][v]);
			}
		}
		return dp[msk][u] = ans;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n;
			for(int i = 0;i<n;i++)
				for(int j = 0;j<n;j++)
					cin >> c[i][j];
			int ans = INT_MAX;
			for(int u = 0;u<n;u++){
				memset(dp,-1,sizeof(dp));
				int cur = solve(1 << u,u);
				ans = min(ans,cur);
			}
			cout << ans << endl;
		}
	}

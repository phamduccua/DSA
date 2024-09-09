#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
	int main(){
		int t; cin >> t;
		while(t--){
			int n,V; cin >> n >> V;
			memset(dp,0,sizeof(dp));
			int a[n+1],c[n+1];
			for(int i = 1;i<=n;i++) cin >> a[i];
			for(int i = 1;i<=n;i++) cin >> c[i];
			for(int i = 1;i<=n;i++){
				for(int x = 0;x<=V;x++){
					if(x >= a[i]){
						dp[i][x] = max(dp[i-1][x],dp[i-1][x-a[i]]+c[i]);
					}
				}
			}
			cout << dp[n][V] << endl;
		}
	}

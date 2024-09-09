#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,V; cin >> n >> V;
			int a[n+1],c[n+1];
			for(int i = 1;i<=n;i++) cin >> a[i];
			for(int i = 1;i<=n;i++) cin >> c[i];
			vector<int> dp(V+5,0);
			for(int i = 1;i<=n;i++){
				for(int x = V;x>=a[i];x--){
					dp[x] = max(dp[x],dp[x-a[i]]+c[i]);
				}
			}
			cout << dp[V] << endl;
		}
	}

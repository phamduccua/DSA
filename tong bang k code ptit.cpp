#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int a[n];
			for(int i = 0;i<n;i++) cin >> a[i];
			vector<int> dp(k + 5,0);
			dp[0] = 1;
			for(int i = 0;i<n;i++){
				for(int x = a[i];x<=k;x++){
					dp[x] = (dp[x] + dp[x-a[i]]) % MOD;
				}
			}
			cout << dp[k] << endl;
		}
	}

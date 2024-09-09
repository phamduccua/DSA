#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			long long dp[n+1] = {1};
			dp[0] = 1;
			for(int i = 1;i<=n;i++){
				dp[i] = 0;
				for(int j = 0;j<i;j++){
					dp[i] += 1ll*dp[j]*dp[i-j-1];
				}
			}
			cout << dp[n] << endl;
		}
	}

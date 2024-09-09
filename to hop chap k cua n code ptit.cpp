#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int dp[1001][1001];
	int main(){
		int t; cin  >> t;
		while(t--){
			int n,k; cin >> n >> k;
			dp[1][0] = 1;
			dp[1][1] = 1;
			for(int i = 2;i<=n;i++){
				for(int j = 0;j<=i;j++){
					if(j == 0 || j == i) dp[i][j] = 1;
					else dp[i][j] = ((dp[i-1][j-1]%MOD)+(dp[i-1][j]%MOD)) % MOD;
				}
			}
			cout << dp[n][k] << endl;
		}
	} 

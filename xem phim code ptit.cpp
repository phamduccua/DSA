#include <bits/stdc++.h>
using namespace std;
	int main(){
		int c,n; cin >> c >> n;
		int a[n];
		for(int i = 0;i<n;i++) cin >> a[i];
		int dp[105][25005] = {0};
		for(int i = 0;i<n;i++){
			for(int j = 0;j<i;j++){
				dp[i][j] = dp[i][j-1];
				if(j >= a[i]){
					dp[i][j] = max(dp[i][j],dp[i-1][j-a[i]] + a[i]);
				}
			}
		}
		cout << dp[n][c] << endl;
	}

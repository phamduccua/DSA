#include <bits/stdc++.h>
using namespace std;
int dp[1000000];
	int main(){
		int t; cin >> t;
		while(t--){
			memset(dp,0,sizeof(dp));
			int n; cin >> n;
			int a[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			dp[0] = a[0];
			dp[1] = max(a[1],a[0]);
			int ans = INT_MIN;
			for(int i = 2;i<n;i++){
				dp[i] = max(dp[i-1],dp[i-2]+a[i]);
				ans = max(ans,dp[i]);
			}
			cout << ans << endl;
		}
	} 

#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int dp[10001];
			for(int i = 1;i<=n;i++){
				dp[i] = i;
				for(int j = 1;j<=sqrt(i);j++){
					dp[i] = min(dp[i],dp[i-j*j]+1); 
				}
			}
			cout << dp[n] << endl;
		}
	} 

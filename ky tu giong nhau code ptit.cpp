#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int x,y,z; cin >> x >> y >> z;
			vector<int> dp(n+1,1e9);
			dp[1] = x;
			for(int i = 2;i<=n;i++){
				for(int j = 1;j<=3;j++){
					if(j == 1){
						dp[i] = min(dp[i],dp[i-1]+x);
					}
					else if(j == 2){
						if(i%2 == 0){
							dp[i] = min(dp[i],dp[i/2]+z);
						}
					}
					else{
						if(i <= n-1){
							dp[i] = min(dp[i],dp[i+1]+y); 
						}
					}
					if(i*2 <= n){
						dp[i*2] = dp[i]+z;
					}
				}
			}
			cout << dp[n] << endl;
		}
	}

#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,S; cin >> n >> S;
			int a[n+1];
			for(int i = 1;i<=n;i++) cin >> a[i];
			int dp[40001] = {0};
			dp[0] = 1;
			for(int i = 1;i<=n;i++){
				for(int x = S;x>=a[i];x--){
					if(dp[x-a[i]]) dp[x] = 1;
				}
			}
			if(dp[S]) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		
	}

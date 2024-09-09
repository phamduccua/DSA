#include <bits/stdc++.h>
using namespace std;
	int main(){
		int n; cin >> n;
		int a[n];
		for(int i = 0;i<n;i++) cin >> a[i];
		int dp[n+1];
		int cnt = 0;
		for(int i = 0;i<n;i++){
			dp[i] = 1;
			for(int j = 0;j<i;j++){
				if(a[i] > a[j]){
					dp[i] = max(dp[i],dp[j]+1);
				}
			}
			cnt = max(dp[i],cnt);
		}
		cout << cnt;
	}

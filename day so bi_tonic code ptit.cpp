#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n];
			for(int i = 0;i<n;i++) cin >> a[i];
			int sum1[n] = {0};
			int sum2[n] = {0};
			for(int i = 0;i<n;i++){
				sum1[i] = a[i];
				for(int j = 0;j<i;j++){
					if(a[i] > a[j]){
						sum1[i] = max(sum1[i],sum1[j]+a[i]);
					}
				}
			}
			for(int i = n-1;i>=0;i--){
				sum2[i] = a[i];
				for(int j = n-1;j>i;j--){
					if(a[i] > a[j]){
						sum2[i] = max(sum2[i],sum2[j] + a[i]);
					}
				}
			}
			int ans = INT_MIN;
			for(int i = 0;i<n;i++){
				ans = max(ans,sum1[i]+sum2[i]-a[i]);
			}
			cout << ans << endl;
		}
	} 

#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n];
			for(int i = 0;i<n;i++) cin >> a[i];
			int sum[n] = {0};
			sum[0] = a[0];
			sum[1] = max(a[0],a[1]);
			for(int i = 2;i<n;i++){
				sum[i] = max(sum[i-2]+a[i],sum[i-1]);
			}
			cout << *max_element(sum,sum+n) << endl;
		}
	}

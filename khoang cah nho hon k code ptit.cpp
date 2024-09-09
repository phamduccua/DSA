#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int a[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			sort(a,a+n);
			int ans = 0;
			for(int i = 0;i<n;i++){
				ans += lower_bound(a+i,a+n,a[i]+k)-a-i-1;
			}
			cout << ans << endl;
		}
	}

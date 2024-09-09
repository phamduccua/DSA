#include <bits/stdc++.h>
using namespace std;
	int main(){
		int n; cin >> n;
		int a[n];
		int cnt[100005] = {0};
		int res = -1;
		for(int i = 0;i<n;i++){
			cin >> a[i];
			cnt[a[i]] = cnt[a[i]-1]+1;
			res = max(res,cnt[a[i]]);
		}
		cout << n - res;
	}

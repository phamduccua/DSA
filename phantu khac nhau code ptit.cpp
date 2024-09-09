#include <bits/stdc++.h>
using namespace std;
#define ll long long
	int find(ll sumA[],ll sumB[],int l ,int r){
		if(l > r) return -1;
		int m = (l+r)/2;
		if(sumA[m] != sumB[m]){
			int t = find(sumA,sumB,l,m-1);
			if(t != -1) return t;
			else return m;
		}
		return find(sumA,sumB,m+1,r);
	}
	int main(){
		int t; cin >> t;
		while(t--){
			ll n; cin >> n;
			ll a[n+1],b[n];
			ll sumA[n+1] = {0};
			ll sumB[n] = {0};
			for(int i = 1;i<=n;i++){
				cin >> a[i];
				sumA[i] = sumA[i-1] + a[i];
			}
			for(int i = 1;i<=n-1;i++){
				cin >> b[i];
				sumB[i] = sumB[i-1]+b[i];
			}
			int res = find(sumA,sumB,1,n-1);
			if(res == -1) cout << n << endl;
			else cout << res << endl;
		}	
	}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
	ll solve(ll n,ll k){
		if(k & 1) return 1;
		ll N = (ll) pow(2,n)-1;
		if(k == N/2 + 1) return n;
		else if(k < N/2+1) return solve(n-1,k);
		else return solve(n - 1 ,k - (N/2+1));
	}
	int main(){
		int t; cin >> t;
		while(t--){
			ll n,k; cin >> n >> k;
			cout << solve(n,k) << endl;
		}
	} 

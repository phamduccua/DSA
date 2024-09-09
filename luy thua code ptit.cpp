#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
long long pow(long long x,long long n){
		if(n == 0) return 1;
		long long X =  pow(x,n/2)%MOD;
		if(n % 2) return (1ll*((X*X)%MOD)*x)%MOD;
		else return (1ll*((X*X)%MOD))%MOD;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			long long x,n; cin >> x >> n;
			long long kq = pow(x,n);
			cout << kq << endl;
		}
	}

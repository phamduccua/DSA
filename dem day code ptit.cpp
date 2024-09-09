#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
	long long pow(int x,long long n){
		if(n == 0) return 1;
		long long X = pow(x,n/2);
		if(n % 2) return ((X%MOD)*(X%MOD)*x)%MOD;
		else return ((X%MOD)*(X%MOD))%MOD;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			long long n; cin >> n;
			long long kq = pow(2,n-1);
			cout << kq << endl;
		}
	} 

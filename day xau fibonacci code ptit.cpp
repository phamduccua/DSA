#include <bits/stdc++.h>
using namespace std;
long long F[100];
	char Find(long long n,long long k){
		if(n == 1) return 'A';
		if(n == 2) return 'B';
		if(k <= F[n-2]){
			return Find(n-2,k);
		}
		else return Find(n-1,k-F[n-2]);
	}
	int main(){
		F[0] = 0,F[1] = 1;
		for(int i = 2;i<=92;i++) F[i] = F[i-1]+F[i-2];
		int t; cin >> t;
		while(t--){
			long long n,k; cin >> n >> k;
			cout << Find(n,k) << endl;
		}
	}

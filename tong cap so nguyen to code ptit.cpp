#include <bits/stdc++.h>
using namespace std;
	bool nt(int n){
		for(int i = 2;i<=sqrt(n);i++){
			if(n % i == 0) return false;
		}
		return true;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin  >> n;
			int ok = 0;
			for(int i = 2;i<=n;i++){
				if(nt(i) && nt(n-i)){
					cout << i << ' ' << n-i << endl;
					ok = 1;
					break;
				}
			}
			if(!ok) cout << -1 << endl;
		}
	}

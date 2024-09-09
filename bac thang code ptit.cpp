#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int b[n+1];
			b[0] = 1;
			for(int i = 1;i<=n;i++){
				b[i] = 0;
				for(int j = 1;j<=k;j++){
					if(i >= j){
						b[i] = (b[i]+b[i-j])%MOD;
					}
				}
			}
			cout << b[n] << endl;
		}
	}

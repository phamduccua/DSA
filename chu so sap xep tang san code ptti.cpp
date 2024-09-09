#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int C[111][111];
	void ktao(){
		for(int i = 2;i<=110;i++){
			for(int j = 0;j<=i;j++){
				if(i == j || j == 0) C[i][j] = 1;
				else C[i][j] = (C[i-1][j-1]%MOD + C[i-1][j]) % MOD;
			}
		}
	}
	int main(){
		C[1][0] = C[1][1] = 1;
		ktao();
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			cout << C[9+n][n] << endl;
		}
	}

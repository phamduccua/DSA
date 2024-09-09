#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			long long b[n+1];
			b[0] = 1;
			for(int i = 1;i<=n;i++){
				b[i] = 0;
				for(int j = 1;j<=3;j++){
					if(i >= j){
						b[i] = b[i]+b[i-j];
					}
				}
			}
			cout << b[n] << endl;
		}
	}

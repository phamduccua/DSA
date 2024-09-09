#include <bits/stdc++.h>
using namespace std;
long long F[100];
	void ktao(){
		F[0] = 0,F[1] = 1;
		for(int i = 2;i<=92;i++){
			F[i] = F[i-1]+F[i-2];
		}
	}
	int Find(int n,int k){
		if(n == 1) return 0;
		if(n == 2) return 1;
		if(k <= F[n-2]) return Find(n-2,k);
		else return Find(n-1,k-F[n-2]);
	}
	int main(){
		ktao();
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int kq = Find(n,k);
			cout << kq << endl;
		}
	}

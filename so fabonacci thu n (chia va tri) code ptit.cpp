#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
struct matran{
	long long a[2][2];
	friend matran operator*(matran x,matran y){
		matran kq;
		for(int i = 0;i<2;i++){
			for(int j =0;j<2;j++){
				kq.a[i][j] = 0;
				for(int k = 0;k<2;k++){
					kq.a[i][j] += x.a[i][k]*y.a[k][j];
					kq.a[i][j] %= MOD;
				}
			}
		}
		return kq;
	}
};
matran binpow(matran x,long long n){
	if(n == 1) return x;
	matran X = binpow(x,n/2);
	if(n % 2) return X*X*x;
	else return X*X;
}
int main(){
	int t; cin >> t;
	while(t--){
		matran x;
		x.a[0][0] = 1;
		x.a[0][1] = 1;
		x.a[1][0] = 1;
		x.a[1][1] = 0;
		long long n; cin >> n;
		matran y = binpow(x,n);
		cout << y.a[1][0] << endl;
	}
}


#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

struct matran {
    int n;
    long long a[15][15];
    friend matran operator*(matran x, matran y) {
        matran kq;
        kq.n = x.n; 
        for (int i = 0; i < kq.n; i++) {
            for (int j = 0; j < kq.n; j++) {
                kq.a[i][j] = 0;
                for (int k = 0; k < kq.n; k++) {
                    kq.a[i][j] += x.a[i][k] * y.a[k][j];
                    kq.a[i][j] %= MOD;
                }
            }
        }
        return kq;
    }
};

matran binpow(matran x, int n) {
     if(n == 1) return x;
	 matran X = binpow(x,n/2);
	 if(n % 2) return X*X*x;
	 else return X*X; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        matran x;
        x.n = n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> x.a[i][j];
            }
        }
        matran y = binpow(x, k);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += 1ll*y.a[i][n-1];
            sum %= MOD;
        }
        cout << sum << endl;
    }
    return 0;
}


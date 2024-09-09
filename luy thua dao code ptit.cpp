#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long pow(long long x, long long n) {
    if (n == 0) return 1;
    long long X = pow(x, n / 2) % MOD;
    if (n % 2)
        return (1ll * ((X * X) % MOD) * x) % MOD;
    else
        return (1ll * (X * X)) % MOD;
}

void lat(string &s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s != "0") {
            long long n = stoll(s); 
            lat(s);
            long long m = stoll(s); 
            long long kq = pow(n, m);
            cout << kq << endl;
        } else {
            cout << 1 << endl; 
        }
    }
    return 0;
}


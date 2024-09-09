#include <bits/stdc++.h>
using namespace std;

int tk(int a[], int n, int x) {
    int l = 0, r = n - 1;
    int m = -1;
    while (l <= r) {
        m = (l + r) / 2;
        if (a[m] <= x) l = m + 1;
        else r = m - 1;
    }
    return m;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if (a[0] > x) {
            cout << -1 << endl;
        }
        else{
        	int ans = tk(a,n,x);
        	if(a[ans] <= x) cout << ans+1 << endl;
        	else cout << ans << endl;
		}
    }
    return 0;
}


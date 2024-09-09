#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int a[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			sort(a,a+n);
			if(k > n-k){
				k = n-k;
			}
			long long s1=0;
			long long s2=0;
			for(int i = 0;i<k;i++){
				s1 += a[i];
			}
			for(int i = k;i<n;i++){
				s2 += a[i];
			}
			long long sum = abs(s1-s2);
			cout << sum << endl;
		}
	}

#include <bits/stdc++.h>
using namespace std;
	int kt(int a[],int b[],int n){
		int l = 0,r = n-1;
		while(l < n){
			if(a[l] != b[l]){
				if(a[l] != b[r]) return 0;
			}
			l++;r--;
		}
		return 1;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n],b[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];b[i] = a[i];
			}
			sort(b,b+n);
			if(kt(a,b,n)) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}

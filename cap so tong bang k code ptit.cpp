#include <bits/stdc++.h>
using namespace std;
	int cnt(int a[],int n,int k){
		int l = 0,r = n-1;
		int cnt = 0;
		while(l <= r){
			if(a[l] + a[r] == k){
				++cnt; l++;
			}
			else if(a[l] + a[r] < k) l++;
			else r--;
		}
		return cnt;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;;
			int a[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			sort(a,a+n);
			int x = cnt(a,n,k);
			cout << x << endl;
		}
	}

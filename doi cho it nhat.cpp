#include <bits/stdc++.h>
using namespace std;
	bool kt(int a[],int b[],int n){
		for(int i = 0;i<n;i++){
			if(a[i] != b[i]) return false;
		}
		return true;
	}
	int find(int a[],int n,int x){
		for(int i = n-1;i>=0;i--){
			if(a[i] == x) return i;
		}
		return -1;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n],b[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
				b[i] = a[i];
			}
			sort(b,b+n);
			int cnt = 0;
			for(int i = 0;i<n;i++){
				if(a[i] != b[i]){
					int x = find(a,n,b[i]);
					swap(a[x],a[i]);
					++cnt;
				}
				if(kt(a,b,n)) break;
			}
			cout << cnt << endl;
		}
	}

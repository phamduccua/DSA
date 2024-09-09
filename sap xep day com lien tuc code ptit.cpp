#include <bits/stdc++.h>
using namespace std;
	int find_dau(int a[],int b[],int n){
		for(int i = 0;i<n;i++){
			if(a[i] != b[i]) return i;
		}
		return -1;
	}
	int find_cuoi(int a[],int b[],int n){
		for(int i = n-1;i>=0;i--){
			if(a[i] != b[i]){
				return i;
			}
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
			sort(a,a+n);
			int c = find_dau(a,b,n);
			int d = find_cuoi(a,b,n);
			cout << c+1 << ' ' << d+1 << endl;
		}
	}

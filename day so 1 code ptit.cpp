#include <bits/stdc++.h>
using namespace std;
	void in(int a[],int n){
		cout << '[';
		for(int i = 0;i<n;i++){
			cout << a[i];
			if(i != n-1) cout << ' ';
		}
		cout << ']';
		cout << endl;
	}
	void Try(int a[],int n){
		in(a,n);
		for(int i = 0;i<n;i++){
			a[i] = a[i]+a[i+1];
		}
		if(n != 1) Try(a,n-1);
	} 
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			Try(a,n);
		}
	}

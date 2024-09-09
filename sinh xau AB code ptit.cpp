#include <bits/stdc++.h>
using namespace std;
bool ok;
	void ktao(int a[],int n){
		for(int i = 1;i<=n;i++){
			a[i] = 0;
		}
	}
	void sinh(int a[],int n){
		int i = n;
		while(i >= 1 && a[i] == 1){
			a[i] = 0;
			--i;
		}
		if(i == 0) ok = false;
		else a[i] = 1;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n+1];
			ktao(a,n);
			ok = true;
			while(ok){
				for(int i = 1;i<=n;i++){
					cout << (char)(a[i]+65); 
				}
				cout << ' ';
				sinh(a,n);
			}
			cout << endl;
		}
	}

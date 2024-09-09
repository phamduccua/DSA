#include <bits/stdc++.h>
using namespace std;
bool ok;
	void ktao(char a[],int n){
		for(int i = 1;i<=n;i++){
			a[i] = 'A';
		}
	}
	void sinh(char a[],int n){
		int i = n;
		while(i >= 1 && a[i] == 'H'){
			a[i] = 'A';
			--i;
		}
		if(i == 0) ok = false;
		else a[i] = 'H';
	}
	int kt(char a[],int n){
		if(a[1] != 'H' || a[n] != 'A') return 0;
		for(int i = 1;i<=n-1;i++){
			if(a[i] == 'H' && a[i+1] == 'H') return 0;
		}
		return 1;
	}
	int main(){
		int t;
		cin >> t;
		while(t--){
			int n; cin >> n;
			char a[n+1];
			ktao(a,n);
			ok = true;
			while(ok){
				if(kt(a,n)){
					for(int i = 1;i<=n;i++){
						cout << a[i];
					}
					cout << endl;
				}
				sinh(a,n);
			}
		}
	}

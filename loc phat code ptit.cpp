#include <bits/stdc++.h>
using namespace std;
bool ok;
	void ktao(char a[],int n){
		for(int i = 1;i<=n;i++){
			a[i] = '6';
		}
	}
	void sinh(char a[],int n){
		int i = n;
		while(i >= 1 && a[i] == '8'){
			a[i] = '6';
			--i;
		}
		if(i ==  0) ok = false;
		else{
			a[i] = '8';
		}
	}
	int kt(char a[],int n){
		if(n < 6) return 0;
		if(a[1] != '8' || a[n] != '6') return 0;
		for(int i = 1;i<=n-1;i++){
			if(a[i] == '8' && a[i+1] == '8') return 0;
		}
		for(int i = 1;i<=n-3;i++){
			if(a[i] == '6' && a[i+1] == '6' && a[i+2] == '6' && a[i+3] == '6') return 0;
		}
		return 1;
	}
	int main(){
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

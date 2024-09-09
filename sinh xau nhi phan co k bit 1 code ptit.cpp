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
	int kt(int a[],int n,int k){
		int cnt = 0;
		for(int i = 1;i <= n;i++){
			if(a[i] == 1){
				++cnt;
			}
			if(cnt > k) return 0;
		}
		if(cnt == k) return 1;
		else return 0;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int a[n+1];
			ktao(a,n);
			ok = true;
			while(ok){
				if(kt(a,n,k)){
					for(int i = 1;i<=n;i++){
						cout << a[i];
					}
					cout << endl;
				}
				sinh(a,n);
			}
			cout << endl;
		}
	}
	

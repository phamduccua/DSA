#include <bits/stdc++.h>
using namespace std;
bool ok;
	void ktao(int a[],int n){
		for(int i = 1;i<=n;i++){
			a[i] = i;
		}
	}
	void sinh(int a[],int n){
		int i = n-1;
		while(i >= 1 && a[i] > a[i+1]){
			--i;
		}
		if(i == 0) ok = false;
		else{
			int j = n;
			while(a[i] > a[j]) --j;
			swap(a[i],a[j]);
			reverse(a+i+1,a+n+1);
		}
	}
	int kt(int a[],int nh[],int n){
		for(int i =1;i<=n;i++){
			if(a[i] != nh[i]) return 0;
		}
		return 1;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n+1];
			int nh[n+1];
			for(int i = 1;i<=n;i++) cin >> nh[i];
			ktao(a,n);
			ok = true;
			int cnt = 1;
			while(ok){
				if(kt(a,nh,n)){
					cout << cnt << endl;
					break;
				}
				cnt++;
				sinh(a,n);
			}
		}
	}

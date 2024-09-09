#include <bits/stdc++.h>
using namespace std;
bool ok;
	void ktao(int a[],int k){
		for(int i = 1;i<=k;i++){
			a[i] = i;
		}
	}
	void sinh(int a[],int n,int k){
		int i = k;
		while(i >= 1 && a[i] == n-k+i){
			--i;
		}
		if(i == 0) ok = false;
		else{
			a[i]++;
			for(int j = i+1;j<=k;j++){
				a[j] = a[j-1]+1;
			}
		}
	}
	int kt(int a[],int nh[],int k){
		for(int i = 1;i<=k;i++){
			if(a[i] != nh[i]) return 0;
		}
		return 1;
	}
	int main(){
		int t;cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int a[n+1];
			int nh[k+1];
			for(int i = 1;i<=k;i++) cin >> nh[i];
			ktao(a,k);
			ok = true;
			int cnt = 1;
			while(ok){
				if(kt(a,nh,k)){
					cout << cnt << endl;
					break;
				}
				++cnt;
				sinh(a,n,k);
			}
		}
	}

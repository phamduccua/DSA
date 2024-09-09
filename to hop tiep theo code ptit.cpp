#include <bits/stdc++.h>
using namespace std;
bool ok;
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
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int a[k+1];
			set<int> se;
			for(int i = 1;i<=k;i++){
				cin >> a[i];
				se.insert(a[i]);
			}
			ok = true;
			sinh(a,n,k);
			if(ok){
				int cnt = 0;
				for(int i = 1;i<=k;i++){
					auto it = se.find(a[i]);
					if(it == se.end()) ++cnt;
				}
				cout << cnt << endl;
			}
			else cout << k << endl;
		}
	}

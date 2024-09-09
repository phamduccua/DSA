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
			int n,k;
			cin >> n >> k;
			ok = true;
			int a[k+1];
			for(int i = 1;i<=k;i++){
				cin >> a[i];
			}
			sinh(a,n,k);
			if(ok){
				for(int i = 1;i<=k;i++){
					cout << a[i] << ' ';
				}
				cout << endl;
			}	
			else{
				for(int i = 1;i<=k;i++){
					cout << i << ' ';
				}
				cout << endl;
			}
		}
	}

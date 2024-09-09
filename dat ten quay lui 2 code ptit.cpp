#include <bits/stdc++.h>
using namespace std;
	void Try(int i,int pos,int a[],int k,int n){
		for(int j = pos;j<=n;j++){
			a[i] = j;
			if(i == k-1){
				for(int t = 0;t<k;t++){
					cout << (char)(a[t]+64);
				}
				cout << endl;
			}
			else Try(i+1,j+1,a,k,n);
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int a[k];
			Try(0,1,a,k,n);
		}
	}

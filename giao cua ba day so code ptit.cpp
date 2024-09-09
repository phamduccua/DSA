#include <bits/stdc++.h>
using namespace std;
	void xuly(int a[],int b[],int nh[],int n,int m,int &t){
		int i = 0,j=0;
		while(i < n && j < m){
			if(a[i] == b[j]){
				nh[t++] = a[i];
				i++;j++;
			}
			else if(a[i] < b[j]) i++;
			else j++;
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m,k; cin >> n >> m >> k;
			int a[n],b[m],c[k];
			for(int i = 0;i<n;i++) cin >> a[i];
			for(int i = 0;i<m;i++) cin >> b[i];
			for(int  i = 0;i<k;i++) cin >> c[i];
			int d = 0;
			int tmp[min(n,m)];
			xuly(a,b,tmp,n,m,d);
			int g[min(d,k)];
			int giao = 0;
			xuly(c,tmp,g,k,d,giao);
			if(giao == 0) cout << -1 << endl;
			else{
				for(int i = 0;i<giao;i++){
					cout << g[i] << ' ';
				}
				cout << endl;
			}
		}
	}

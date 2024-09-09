#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m; cin >> n >> m;
			int a[n],b[m];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			for(int i = 0;i<m;i++){
				cin >> b[i];
			}
			sort(a,a+n);
			sort(b,b+m);
			int giao[min(n,m)];
			int hop[n+m];
			int i = 0,j = 0,g = 0,h = 0;
			while(i < n && j < m){
				if(a[i] == b[j]){
					giao[g] = a[i];
					hop[h] = b[j];
					i++;j++;g++;h++;
				}
				else if(a[i] < b[j]){
					hop[h] = a[i];
					i++;h++;
				}
				else{
					hop[h] = b[j];
					j++;h++;
				}
			}
			while(i < n){
				hop[h] = a[i];
				i++;h++;
			}
			while(j < m){
				hop[h] = b[j];
				j++;h++;
			}
			for(int i = 0;i<h;i++){
				cout << hop[i] << ' ';
			}
			cout << endl;
			for(int i= 0;i<g;i++){
				cout << giao[i] << ' ';
			}
			cout << endl;
		}
	}

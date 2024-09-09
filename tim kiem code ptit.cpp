#include <bits/stdc++.h>
using namespace std;
	int tk(int a[],int n,int x){
		int l = 0, r = n-1;
		int m = -1;
		int ok = -1;
		while(l <= r){
			m = (l+r)/2;
			if(a[m] == x){
				ok = 1;
				break;
			}
			else if(a[m] > x){
				r = m-1;
			}
			else l = m+1;
		}
		return ok;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int	n,x; cin >> n >> x;
			int a[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			} 
			sort(a,a+n);
			cout << tk(a,n,x) << endl;
		}
	}

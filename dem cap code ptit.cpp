#include <bits/stdc++.h>
using namespace std;
	int dem(int x,int a[],int n,int cnt[]){
		if(x == 0) return 0;
		if(x == 1) return cnt[0];
		int it = upper_bound(a,a+n,x)-a;
		int d = n - it;
		d += (cnt[0]+cnt[1]);
		if(x == 2) d -= (cnt[3]+cnt[4]);
		if(x == 3) d += cnt[2];
		return d;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m; cin >> n >> m;
			int a[m],b[m];
			int cnt[5] = {0};
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			for(int j = 0;j<m;j++){
				cin >> b[j];
				if(b[j] < 5) cnt[b[j]]++;
			}
			sort(b,b+m);
			int kq = 0;
			for(int i = 0;i<n;i++){
				kq += dem(a[i],b,m,cnt);
			}
			cout << kq << endl;
		}
	}

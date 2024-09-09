#include <bits/stdc++.h>
using namespace std;
struct cv{
	int ma,kt,ln;
};
	bool cmp(cv a,cv b){
		if(a.ln != b.ln) return a.ln > b.ln;
		else{
			if(a.kt != b.kt) return a.kt > b.kt;
			else return a.ma < b.ma;
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			cv a[1001];
			for(int i = 0;i<n;i++){
				cin >> a[i].ma >> a[i].kt >> a[i].ln;
			}
			sort(a,a+n,cmp);
			int dd[1001] = {0};
			int cnt = 0;
			int tien = 0;
			for(int i = 0;i<n;i++){
				for(int j = a[i].kt;j>=1;j--){
					if(!dd[j]){
						tien += a[i].ln;cnt++;
						dd[j] = 1;
						break;
					}
				}
			}
			cout << cnt << ' ' << tien << endl;
		}
	}

#include <bits/stdc++.h>
using namespace std;
int a[1001];
int used[1001];
int n,k;
bool ok;
long long tong;
	void Try(long long sum,int cnt){
		if(cnt == k){
			ok = true;
			return;
		}
		if(ok) return; 
		for(int i = 0;i<n;i++){
			if(!used[i]){
				used[i] = 1;
				if(sum + a[i] == tong){
					Try(0,cnt+1);
				}
				else if(sum + a[i] < tong){
					Try(sum +a[i],cnt);
				}
			}
			used[i] = 0;
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n >> k;
			tong = 0;
			for(int i = 0;i<n;i++){
				cin >> a[i];
				tong += a[i];
			}
			ok = false;
			memset(used,0,sizeof(used));
			if(tong % k) cout << 0 << endl;
			else{
				tong /= k;
				Try(0,0);
				cout << ok << endl;
			}
		}
	}

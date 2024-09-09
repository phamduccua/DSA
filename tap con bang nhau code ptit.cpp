#include <bits/stdc++.h>
using namespace std;
int a[1001];
int n;
bool ok;
	void Try(int i,long long sum,long long tong){
		if(i == n || ok || sum == tong){
			if(sum == tong){
				ok = true;
			}
				return;
			
		}
		if(sum + a[i] <= tong){
			Try(i+1,sum + a[i],tong);
		}
		Try(i+1,sum,tong);
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n;
			long long tong = 0;
			for(int i = 0;i<n;i++){
				cin >> a[i];
				tong += a[i];
			}
			if(tong % 2){
				cout << "NO" << endl;
				continue;
			}
			else{
				tong /= 2;
				ok = false;
				Try(0,0,tong);
				if(ok) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
		}
	}

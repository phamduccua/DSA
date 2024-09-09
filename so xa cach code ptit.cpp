#include <bits/stdc++.h>
using namespace std;
int n,a[1001],used[1001];
	bool kt(int a[]){
		for(int i = 2;i<=n;i++){
			if(abs(a[i]-a[i-1]) == 1) return false;
		}
		return true;
	}
	void Try(int i){
		for(int j = 1;j<=n;j++){
			if(!used[j]){
				used[j] = 1;
				a[i] = j;
				if(i == n){
					if(kt(a)){
						for(int i = 1;i<=n;i++){
							cout << a[i];
						}
						cout << endl;
					}
				}
				else Try(i+1);
				used[j] = 0;
			}
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n;
			memset(used,0,sizeof(used));
			memset(a,0,sizeof(used));
			Try(1);
		}
	}

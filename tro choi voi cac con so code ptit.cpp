#include <bits/stdc++.h>
using namespace std;
int n;
int used[1000];
int a[1000];
	int kt(){
		for(int i = 2;i<=n;i++){
			if(abs(a[i]-a[i-1])==1) return 0;
		}
		return 1;
	}
	void Try(int i){
		for(int j = 1;j<=n;j++){
			if(!used[j]){
				used[j] = 1;
				a[i] = j;
				if(i == n){
					if(kt()){
						for(int k = 1;k<=n;k++){
							cout << a[k];
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
			memset(used,0,sizeof(used));
			cin >> n;
			Try(1);
		}
		
	}

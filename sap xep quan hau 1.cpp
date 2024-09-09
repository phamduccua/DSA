#include <bits/stdc++.h>
using namespace std;
int n,c[100],d1[100],d2[100],cnt;
	void Try(int i){
		for(int j = 1;j<=n;j++){
			if(!c[j] && !d1[i+j-1] && !d2[i-j+n]){
				c[j] = 1;
				d1[i+j-1] = 1;
				d2[i-j+n] = 1;
				if(i == n){
					++cnt;
				}
				else Try(i+1);
				c[j] = 0;
				d1[i+j-1] = 0;
				d2[i-j+n] = 0;
			}
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n;
			memset(c,0,sizeof(c));
			memset(d1,0,sizeof(d1));
			memset(d2,0,sizeof(d2));
			cnt = 0;
			Try(1);
			cout << cnt << endl;
		}
	}

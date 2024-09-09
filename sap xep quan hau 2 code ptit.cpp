#include <bits/stdc++.h>
using namespace std;
int a[10][10];
int c[15],d1[15],d2[15];
int maxx;
int sum;
	void Try(int i){
		for(int j = 1;j<=8;j++){
			if(!c[j] && !d1[i+j-1] && !d2[i-j+8]){
				sum += a[i][j];
				c[j] = 1;
				d1[i+j-1] = 1;
				d2[i-j+8] = 1;
				if(i == 8){
					maxx = max(sum,maxx);
				}
				else Try(i+1);
				sum -= a[i][j];
				c[j] = 0;
				d1[i+j-1] = 0;
				d2[i-j+8] = 0;
			}
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			for(int i = 1;i<=8;i++){
				for(int j = 1;j<=8;j++){
					cin >> a[i][j];
				}
			}
			memset(c,0,sizeof(c));
			memset(d1,0,sizeof(d1));
			memset(d2,0,sizeof(d2));
			maxx = INT_MIN;
			sum = 0;
			Try(1);
			cout << maxx << endl;
		}
	}

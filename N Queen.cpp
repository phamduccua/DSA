#include <bits/stdc++.h>
using namespace std;
int n,a[1000][1000],c[1000],d1[1000],d2[1000],cnt = 0;
	void inp(){
		memset(a,0,sizeof(a));
		memset(c,0,sizeof(c));
		memset(d1,0,sizeof(d1));
		memset(d2,0,sizeof(d2));
	}
	void Try(int i){
		for(int j = 0;j<n;j++){
			if(c[j] == 0 && d1[i+j-1] == 0 && d2[i-j+n] == 0){
				c[j] = 1;
				d1[i+j-1] = 1;
				d2[i-j+n] = 1;
				if(i == n) ++cnt;
				else{
					Try(i+1);
					
				}
				c[j] = 0;
					d1[i+j-1] = 0;
					d2[i-j+n] = 0;
			}
		}
	}
	int main(){
		cin >> n;
		inp();
		Try(1);
		cout << cnt;
	} 

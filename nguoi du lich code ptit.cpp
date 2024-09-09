#include <bits/stdc++.h>
using namespace std;
int a[20][20],X[20],used[20],d = 0,kq = INT_MAX;
int n;
int c_min = INT_MAX;
	void Try(int i){
		for(int j = 1;j<=n;j++){
			if(!used[j]){
				used[j] = 1;
				X[i] = j; 
				d += a[X[i-1]][X[i]];
				if(i == n){
					kq = min(kq,d + a[X[n]][1]);
				}
				else if(d + c_min * (n-i+1) < kq){
					Try(i+1);
				}
				used[j] = 0;
				d -= a[X[i-1]][X[i]];
			}
		}
	}
	int main(){
		cin >> n;
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=n;j++){
				cin >> a[i][j];
				if(a[i][j] != 0){
					c_min = min(c_min,a[i][j]);
				}
				
			}
		}
		memset(used,0,sizeof(used));
		memset(X,0,sizeof(X));
		X[1] = 1,used[1] = 1;
		Try(2);
		cout << kq << endl;
	} 

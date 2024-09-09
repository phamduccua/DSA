#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1001],used[1001];
long long tong = 0;
int dem = 0;
	void Try(int sum ,int cnt ,int pos){
		if(cnt == k && pos == n){
			dem++;
			return; 
		}
		for(int j = pos;j<n;j++){
			sum += a[j];
			if(sum == tong) Try(0,cnt+1,j+1);
		}
	}
	int main(){
		cin >> n >> k;
		for(int i = 0;i<n;i++){
			cin >> a[i];
			tong += a[i];
		}
		memset(used,0,sizeof(used));
		if(tong % k){
			cout << 0 << endl;
		}
		else{
			tong /= k;
			Try(0,0,0);
			cout << dem << endl;
		}
	}

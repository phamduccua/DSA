#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],MIN = INT_MAX,cnt = 0,used[1000];
long long s = 0;
	void Try(long long s,int pos){
		for(int j = pos;j<n;j++){
			if(s == k){
				MIN = min(cnt,MIN);
			}
			else if(s + a[j] <= k){
				++cnt;
				Try(s + a[j],j+1);
				--cnt;
			}
			
		}
	}
	int main(){
		cin >> n >> k;
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		Try(0,0);
		if(MIN == INT_MAX) cout << -1;
		else
		cout << MIN;
	}

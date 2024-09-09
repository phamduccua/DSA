#include <bits/stdc++.h>
using namespace std;
bool ok;
	void ktao(int a[],int n){
		for(int i = 0;i<=n;i++){
			a[i] = i;
		}
	}
	void sinh(int a[],int n){
		int i = n-1;
		while(i >= 1 && a[i] > a[i+1]){
			--i;
		}
		if(i == 0) ok = false;
		else{
			int j = n;
			while(a[i] > a[j]) --j;
			swap(a[i],a[j]);
			reverse(a+i+1,a+n+1);
		}
	}
	int main(){
		int n; 
		cin >> n;
		int nh[n];
		int a[n+1];
		ktao(a,n);
		for(int i = 0;i<n;i++){
			cin >> nh[i];
		}
		sort(nh,nh+n);
		ok = true;
		while(ok){
			for(int i = 1;i<=n;i++){
				cout << nh[a[i]-1] << ' ';
			}
			cout << endl;
			sinh(a,n);
		}
	}

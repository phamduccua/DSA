#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000];
bool ok;
	void ktao(){
		for(int i = 1;i<=n;i++){
			a[i] = 0;
		}
	}
	void sinh(){
		int i = n;
		while(i >= 1 && a[i] == 1){
			a[i] = 0;
			--i;
		}
		if(i == 0) ok = false;
		else{
			a[i] = 1;
		}
	}
	int kt(){
		int l = 1,r = n;
		while(l < r){
			if(a[l] != a[r]) return 0;
			l++;r--;
		}
		return 1;
	}
	int main(){
		cin >> n;
		ktao();
		ok = true;
		while(ok){
			if(kt()){
				for(int i = 1;i<=n;i++){
					cout << a[i] << ' ';
				}
				cout << endl;
			}
			sinh();
		}
	}

#include <bits/stdc++.h>
using namespace std;
bool ok;
	void ktao(int a[],int k){
		for(int i = 1;i<=k;i++){
			a[i] = i;
		}
	}
	void sinh(int a[],int n,int k){
		int i = k;
		while(i >= 1 && a[i] == n-k+i){
			--i;
		}
		if(i == 0) ok = false;
		else{
			a[i]++;
			for(int j = i+1;j<=k;j++){
				a[j] = a[j-1]+1;
			}
		}
	}
	int main(){
		int x,k; cin >> x >> k;
		set<int> se;
		for(int i = 0;i<x;i++){
			int tmp; cin >> tmp;
			se.insert(tmp);
		}
		vector<int> v(se.begin(),se.end());
		int n = v.size();
		int a[n+1];
		ktao(a,k);
		ok = true;
		while(ok){
			for(int i = 1;i<=k;i++){
				cout << v[a[i]-1];
			}
			cout << endl;
			sinh(a,n,k);
		}
	}

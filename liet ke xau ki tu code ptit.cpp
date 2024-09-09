#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1000];
	void Try(int i,int pos){
		for(int j = pos;j<=n;j++){
			a[i] = j;
			if(i == k){
				for(int h = 1;h<=k;h++){
					cout << (char)(a[h]+64);
				}
				cout << endl;
			}
			else Try(i+1,j);
		}
	}
	int main(){
		char c; 
		cin >> c >> k;
		n = c - 64;
		Try(1,1);
	} 

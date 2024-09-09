#include <bits/stdc++.h>
using namespace std;
	int kt(int n,int m,int s){
		long long tong = (long long)(n*s - (s/7)*n);
		long long thucancan = m*s;
		double x = (double)ceil((double)thucancan/n);
		if(thucancan <= tong){
			return x;
		}
		else return -1;
		
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m,s;
			cin >> n >> s >> m;
			cout << kt(n,m,s) << endl;
		}
	} 

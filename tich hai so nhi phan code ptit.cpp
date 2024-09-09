#include <bits/stdc++.h>
using namespace std;
	long long coso(string s){
		long long x = 0;
		for(auto z : s){
			x = x*2 + (z-'0');
		}
		return x;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			string a,b; cin >> a >> b;
			cout << (long long)(coso(a)*(coso(b))) << endl;
		}
	}

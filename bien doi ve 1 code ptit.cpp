#include <bits/stdc++.h>
using namespace std;
	int Try(int n,vector<int> &v){
		if(n == 1) return 0;
		if(v[n] != -1) return v[n];
		int b1 = Try(n-1,v)+1;
		int b2=INT_MAX,b3=INT_MAX;
		if(n % 2 == 0){
			b2 = Try(n/2,v) + 1;
		}
		if(n % 3 == 0){
			b3 = Try(n/3,v)+1;
		}
		v[n] = min(b1,min(b2,b3));
		return v[n];
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			vector<int> v(n+1,-1);
			cout << Try(n,v) << endl;
		}
	} 

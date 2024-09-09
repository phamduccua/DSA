#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			priority_queue<long long ,vector<long long> ,greater<long long>> Q;
			for(int i = 0;i<n;i++){
				int x; cin >> x;
				Q.push(x);
			}
			long long tong = 0;
			while(Q.size() != 1){
				long long it1 = Q.top(); Q.pop();
				long long it2 = Q.top();Q.pop();
				long long sum = it1 + it2;
				tong += sum%MOD;
				Q.push(sum%MOD);
			}
			cout << tong%MOD << endl;
		}
	}

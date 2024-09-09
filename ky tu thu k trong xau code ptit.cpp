#include <bits/stdc++.h>
using namespace std;
	int solve(int n,int k){
		if(k & 1) return 1;
		int N = pow(2,n) - 1;
		int mid = N/2 + 1;
		if(mid == k){
			return n;
		}
		else if(k < mid){
			return solve(n-1,k);
		}
		else return solve(n-1,k-mid);
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int kq = solve(n,k);
			cout << (char)(kq + 64) << endl;
		}
	}

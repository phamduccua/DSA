#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			priority_queue<long long,vector<long long>,greater<long long>> Q;
			for(int i = 0;i<n;i++){
				int x; cin >> x;
				Q.push(x);
			}
			long long sum = 0;
			while(Q.size()!=1){
				long long top1 = Q.top();Q.pop();
				long long top2 = Q.top();Q.pop();
				long long tong = top1 + top2;
				sum += tong;
				Q.push(tong);
			}
			cout << sum << endl;
		}
	}

#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m,k;
			cin >> n >> m >> k;
			multiset<int> se;
			for(int i = 0;i<n;i++){
				int x; cin >> x;
				se.insert(x);
			}
			for(int i = 0;i<m;i++){
				int x; cin >> x;
				se.insert(x);
			}
			int cnt = 1;
			for(auto x : se){
				if(cnt++ == k){
					cout << cnt <<endl;
					break;
				}
			}
		}
	}

#include <bits/stdc++.h>
using namespace std;
	int tk(int a[],int k){
		int M = 0;
		for(int i = 1;i<k;i++){
			if(a[i] > a[M]){
				M = i;
			}
		}
		return M;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >> n >> k;
			int a[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			multiset<int> d;
			for(int i = 0;i<k;i++) d.insert(a[i]);
			cout << *d.rbegin() << ' ';
			for(int i = k;i<n;i++){
				d.erase(d.find(a[i-k]));
				d.insert(a[i]);
				cout << *d.rbegin() << ' ';
			}
			cout << endl;
		}
	}

#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n];
			set<int> se;
			for(int i = 0;i<n;i++){
				cin >> a[i];
				se.insert(a[i]);
			}
			sort(a,a+n);
			int pt = a[n-1]-a[0]+1;
			cout << pt - se.size() << endl;
		}
	}

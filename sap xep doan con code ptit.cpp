#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n];
			for(int i = 0;i<n;i++) cin >> a[i];
			vector<int> v;
			multiset<int> a1;
			multiset<int> a2;
			a1.insert(a[0]);
			for(int i = 1;i<n;i++){
				a2.insert(a[i]);
			}
			if(*a1.rbegin() <= *a2.begin()){
				v.push_back(1);
			}
			for(int i = 1;i<n-1;i++){
				a2.erase(a2.find(a[i]));
				a1.insert(a[i]);
				if(*a1.rbegin() <= *a2.begin()){
					v.push_back(i+1);
				}
			}
			cout << v.size() << endl;
			if(!v.empty()){
				for(int x : v){
					cout << x << ' ';
				}
				cout << endl;
			}
		}
	}

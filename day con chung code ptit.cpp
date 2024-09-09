#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m,k;
			cin >> n >> m >> k;
			vector<int> a;
			vector<int> b;
			vector<int> c;
			for(int i = 0;i<n;i++){
				int x; cin >> x;
				a.push_back(x);
			}
			for(int i = 0;i<m;i++){
				int x; cin >> x;
				b.push_back(x);
			}
			for(int i = 0;i<k;i++){
				int x; cin >> x;
				c.push_back(x);
			}
			vector<int> c1;
			vector<int> c2;
			int i = 0,j = 0;
			while(i < n && j < m){
				if(a[i] == b[j]){
					c1.push_back(a[i]);
					i++;j++;
				}
				else if(a[i] < b[j]){
					++i;
				}
				else{
					++j;
				}
			}
			i = 0;j = 0;
			while(i < c1.size() && j < k){
				if(c1[i] == c[j]){
					c2.push_back(c[j]);
					++i;++j;
				}
				else if(c1[i] < c[j]){
					++i;
				}
				else ++j;
			}
			if(c2.empty()) cout << "NO" << endl;
			else{
				for(auto x : c2){
					cout << x << ' ';
				}
				cout << endl;
			}
		}
	}

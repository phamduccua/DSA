#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n,m; cin >> n >> m;
			vector<int> ke[1001];
			for(int i = 0;i<m;i++){
				int x,y; cin >> x >> y;
				ke[x].push_back(y);
			}
			for(int i = 1;i<=n;i++){
				sort(ke[i].begin(),ke[i].end());
				cout << i << ": ";
				for(auto it : ke[i]){
					cout << it << ' ';
				}
				cout << endl;
			}
		}
	}

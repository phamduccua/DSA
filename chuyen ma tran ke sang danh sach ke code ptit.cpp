#include <bits/stdc++.h>
using namespace std;
	int main(){
		int n; cin >> n; int a[n][n];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				cin >> a[i][j];
			}
		}
		vector<int> ke[1001];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				if(a[i][j]){
					ke[i+1].push_back(j+1);
				}
			}
		}
		for(int i = 1;i<=n;i++){
			for(auto it : ke[i]){
				cout << it << ' ';
			}
			cout << endl;
		}
	}

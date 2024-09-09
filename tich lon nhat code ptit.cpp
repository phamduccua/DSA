#include <bits/stdc++.h>
using namespace std;
	int main(){
		int n; cin >> n;
		vector<int> duong;
		vector<int> am;
		for(int i = 0;i<n;i++){
			int x; cin >> x;
			if( x >= 0) duong.push_back(x);
			else am.push_back(x);
		}
		sort(begin(duong),end(duong),greater<int>());
		sort(begin(am),end(am));
		if(n == 3){
			if(duong.size() > am.size()){
				cout << 1ll*duong[0]*duong[1];
			}
			else cout << 1ll*am[0]*am[1];
		}
		else{
			long long tich_am = 1ll*am[0]*am[1]*duong[0];
			long long tich_duong = 1ll*duong[0]*duong[1]*duong[2];
			if(tich_am > tich_duong) cout << tich_am;
			else cout << tich_duong;
		}
	}

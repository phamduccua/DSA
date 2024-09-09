#include <bits/stdc++.h>
using namespace std;
string s;
bool ok;
	void Try(int i,int j,int n,int a[][21]){
		a[i][j] = 0;
		if(i == n && j == n){
			ok = true;
			cout << s << ' ';
		}
		if(i+1 >= 1 && i+1 <= n && a[i+1][j] == 1){
			s += "D";
			Try(i+1,j,n,a);
			s.pop_back();
		}
		if(j+1 >= 1 && j+1 <= n && a[i][j+1] == 1){
			s += "R";
			Try(i,j+1,n,a);
			s.pop_back();
		}
		a[i][j] = 1;
		
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[21][21];
			for(int i = 1;i <= n;i++){
				for(int j = 1;j <= n;j++){
					cin >> a[i][j];
				}
			}
			ok = false;
			s = "";
			if(a[1][1] == 0){
				cout << -1 << endl;
				continue;
			}
			Try(1,1,n,a);
			if(!ok) cout << -1;
			cout << endl;
		}
	}

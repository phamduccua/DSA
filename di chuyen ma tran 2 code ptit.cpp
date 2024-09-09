#include <bits/stdc++.h>
using namespace std;
int a[1001][1001],ok;
string s;
int n;
	void Try(int i,int j){
		if(i == n && j == n){
			ok = 1;
			cout << s << ' ';
		}
		if(a[i+1][j] == 1 && i + 1 <= n){
            s += "D";
            a[i+1][j] = 0;
            Try(i+1,j);
            s.pop_back();
            a[i+1][j] = 1;
        }
        if(a[i][j-1] == 1 && j - 1 >= 1){
            s += "L";
            a[i][j-1] = 0;
            Try(i,j-1);
            s.pop_back();
            a[i][j-1] = 1;
        }
        if(a[i][j+1] == 1 && j + 1 <= n){
            s += "R";
            a[i][j+1] = 0;
            Try(i,j+1);
            s.pop_back();
            a[i][j+1] = 1;
        }
        if(a[i-1][j] == 1 && i - 1 >= 1){
            s += "U";
            a[i-1][j] = 0;
            Try(i-1,j);
            s.pop_back();
            a[i-1][j] = 1;
        }
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n;
			s = "";
			memset(a,0,sizeof(a));
			for(int i = 1;i<=n;i++){
				for(int j = 1;j<=n;j++){
					cin >> a[i][j];
				}
			}
			if(a[1][1] == 0 || a[n][n] == 0){
				cout << -1 << endl;
			}
			else{
				ok = 0;
				a[1][1] = 0;
				Try(1,1);
				if(!ok) cout << -1;
				cout << endl;
			}
		}
	}

#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			string s1,s2;
			cin >> s1 >> s2;
			int M[1000][1000];
			int res = 0;
			for(int i = 1;i<=s1.length();i++){
				for(int j = 1;j<=s2.length();j++){
					if(s1[i-1] == s2[j-1]) M[i][j] = M[i-1][j-1] + 1;
					else M[i][j] = max(M[i-1][j],M[i][j-1]);
					res = max(res,M[i][j]);
				}
			}
			cout << res << endl;
		}
	}

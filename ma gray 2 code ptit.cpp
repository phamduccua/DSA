#include <bits/stdc++.h>
using namespace std;
	char lat(char c){
		if(c == '1') c = '0';
		else c = '1';
		return c;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			string s; cin >> s;
			string np = s;
			np[0] = s[0];
			for(int i = 1;i<s.length();i++){
				if(s[i] == '0'){
					np[i] = np[i-1];
				}
				else np[i] = lat(np[i-1]);
			}
			cout << np << endl;
		}
	}

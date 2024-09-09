#include <bits/stdc++.h>
using namespace std;	
bool ok;
	void sinh(string &s){
		int i = s.length()-1;
		while(i >= 0 && s[i] == '0'){
			s[i] = '1';
			--i;
		}
		if(i == -1) ok = false;
		else s[i] = '0';
	}
	int main(){
		int t; cin >> t;
		while(t--){
			string s; cin >> s;
			ok = true;
			sinh(s);
			if(ok){
				cout << s << endl;
			}
			else{
				for(int i = 0;i<s.length();i++){
					cout << 1;
				}
				cout << endl;
			}
		}
	}

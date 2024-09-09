#include <bits/stdc++.h>
using namespace std;
	char XOR(char a,char b){
		if(a != b) return '1';
		else return '0';
	}
	int main(){
		int t; cin >> t;
		while(t--){
			string s; cin >> s;
			string gr = s;
			for(int i = 1;i<s.length();i++){
				gr[i] = XOR(s[i],s[i-1]);
			}
			cout << gr << endl;
		}
	}

#include <bits/stdc++.h>
using namespace std;
	string MAX(string a, string b){
		for(int i = 0;i<a.length();i++){
			if(a[i] == '5'){
				a[i] = '6';
			}
		}
		for(int i = 0;i<b.length();i++){
			if(b[i] == '5'){
				b[i] = '6';
			}
		}
		long long tmp = stoll(a) + stoll(b);
		return to_string(tmp);
	}
	string MIN(string a, string b){
		for(int i = 0;i<a.length();i++){
			if(a[i] == '6'){
				a[i] = '5';
			}
		}
		for(int i = 0;i<b.length();i++){
			if(b[i] == '6'){
				b[i] = '5';
			}
		}
		long long tmp = stoll(a) + stoll(b);
		return to_string(tmp);
	}
	int main(){
			string a,b;
			cin >> a >> b;
			string M = MAX(a,b);
			string m = MIN(a,b);
			cout << m << ' ' << M << endl;
	}

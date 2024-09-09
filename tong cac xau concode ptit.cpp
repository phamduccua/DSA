#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			string s; cin >> s;
			long long tong = 0;
			int len = 1;
			while(len <= s.length()){
				for(int i = 0;i<s.length()-len+1;i++){
					string tmp = "";
					for(int j = 0;j<len;j++){
						tmp += s[i+j];
					}
					tong += stoll(tmp);
				}
				len++;
			}
			cout << tong << endl;
		}
	} 
